from datetime import timedelta
from genericpath import isfile
import os
from flask import Flask, flash, redirect, request, send_file, url_for, session
from flask import render_template
from xml.dom import minidom
import pandas as pd
from werkzeug.utils import secure_filename
import csv
from pathlib import Path
from createXMLElements import *

app = Flask(__name__, template_folder='templates')

app.secret_key = 'My_APP_Secret_Key'

# Create a directory in a known location to save files to.
uploads_dir = os.path.join(os.path.dirname(__file__), 'uploads')
os.makedirs(uploads_dir, exist_ok=True)

converted_dir = os.path.join(os.path.dirname(__file__), 'converted')
os.makedirs(converted_dir, exist_ok=True)

template_dir = os.path.join(os.path.dirname(__file__), 'templates')

@app.route('/')
@app.route('/hello')
def hello():
    # Render the page
    return render_template('index.html')

@app.route('/convert', methods=("POST", "GET"))
def convert():
    myfile = request.files['myfile1']
    #myfile.save(os.path.join(uploads_dir, secure_filename(myfile.filename))) 
    p_name = request.form['project_name']
    schema_name = request.form['schema_name']
    if(myfile.content_type == "text/csv"):
        myfile.save(os.path.join(uploads_dir, secure_filename(myfile.filename)))
        converted_file = convert_file(myfile.filename,p_name,schema_name)
        #print(converted_file)
        try:
            return send_file(converted_file, as_attachment=True)
        except:
            if converted_file :
                flash("file does not meet the requirements. Some mandatory column is/are missing : " + str(converted_file) + " in file. Please read Instructions Points.")
            return redirect(url_for('hello'))
    else:
        flash("file type not valid")
        return redirect(url_for('hello'))  
    #return "Hello there!"


@app.route('/load',methods=("POST", "GET"))
def load_csv():
    myfile = request.files['myfile1']
    myfile.save(os.path.join(uploads_dir, secure_filename(myfile.filename)))
    base_path = Path(__file__).parent
    file_path = (base_path / "uploads/" / myfile.filename).resolve()
    session["file"] = myfile.filename
    list_mand_csv_fields = ['Loop/Rec Name', 'Type', 'min occ', 'max occ', 'Default Value','Field Name','Length']
    
    with open(file_path, 'r') as csv_file:
        csv_reader = csv.DictReader(csv_file)
        return render_template('index.html',header_data = csv_reader.fieldnames, mand_fields = list_mand_csv_fields)


@app.route('/send_template_csv',methods=("POST", "GET"))
def send_template_csv():
    template_file = "templates\\Schema_Specification_template.csv"
    return send_file(template_file)


def convert_file(file_name, project_name, schema_name):
    if project_name == "":
        project_name = "Project_Name"
    if schema_name == "":
        schema_name = "Schema_Name"

    xmlobject = createXMLElements()
    xsd_root,header_sequence = xmlobject.createRoot(project_name,schema_name)
    xsd_loop_start_sequence = ''
    base_path = Path(__file__).parent
    file_path = (base_path / "uploads/" / file_name).resolve()

    list_mand_csv_fields = ['Loop/Rec Name', 'Type', 'min occ', 'max occ', 'Default Value','Field Name','Length']
    list_mand_csv_fields_1 = ['Loop/Rec Name', 'Type', 'Occ', 'Correlation','Field Name','Length']
    with open(file_path, 'r') as csv_file:
        csv_reader = csv.DictReader(csv_file)
        line_count = 0

        #print(csv_reader.fieldnames)
        print(len(set(list_mand_csv_fields_1).difference(csv_reader.fieldnames)))
        if len(set(list_mand_csv_fields).difference(csv_reader.fieldnames)) and len(set(list_mand_csv_fields_1).difference(csv_reader.fieldnames)) :
            return set(list_mand_csv_fields).difference(csv_reader.fieldnames)
        else:
            for row in csv_reader:
                atrributes = createXMLElements.setAttribues(row)
                if row['Type'] == 'LS':
                    xsd_loop_start,xsd_loop_start_sequence = xmlobject.createLoopSegment(header_sequence,xsd_loop_start_sequence,atrributes)
                if row['Type'] == 'LE':
                     xsd_loop_start,xsd_loop_start_sequence = xmlobject.getPreviousLoopNode(xsd_loop_start,xsd_loop_start_sequence)
                if row['Type'] == 'RC':
                    sequence = xmlobject.createRecordSegment(header_sequence,xsd_loop_start_sequence,atrributes)
                elif row['Type'] != 'RC' and row['Type'] != 'LS' and row['Type'] != '' and row['Type'] != 'LE':
                    xmlobject.createRecordFields(sequence,atrributes)
                line_count = line_count + 1
            

    xml_str = xsd_root.toprettyxml(indent="\t")
    converted_file_name, extension = os.path.splitext(file_name)
    converted_file_name = converted_file_name + ".seexsd"
    file_path = (base_path / "converted/" / converted_file_name).resolve()

    with open(file_path, "w") as f:
        f.write(xml_str)
    return 'converted\\' + converted_file_name

if __name__ == '__main__':
    # Run the app server on localhost:4449
    app.run(debug=True)
