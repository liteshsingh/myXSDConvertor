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

file1 = open("PHARDIS_OUTDELV.inc", "r+")
 
file1.seek(0)
 

project_name = "Project_Name"

schema_name = "Schema_Name"

xmlobject = createXMLElements()
xsd_root,header_sequence = xmlobject.createRoot(project_name,schema_name)
xsd_loop_start_sequence = ''


print("Output of Readlines function is ")
# for eachline in file1.readlines():
#     if not(eachline.__contains__("==") or (eachline.__contains__("----"))):
#         #print(eachline)
# print()

row = {}
field_value = 0
count_define = 0
for eachline in file1.readlines():
    if count_define == 0:
          row['Type'] = 'LS'
    row['Type'] = "Type_"
    #row['Loop/Rec Name'] = "Record_"
    if(eachline.__contains__("! Line :")):
        row['Type'] = 'RC'
        row['Loop/Rec Name'] = (eachline.split("! Line :", 1)[1]).strip()
        #row['Loop/Rec Name'] = "Record_"
    row['Field Name'] = "Field_"
    row['Length'] = '1'
    row['min occ'] = '0'
    row['max occ'] = '1'
    row['maxOccurs'] = '1'
    row['minOccurs'] = '0'
    row['Default Value'] = ''
    
    if(eachline.__contains__("#define")):
        count_define = count_define + 1
        if count_define % 2 != 0 :
              row['Type'] = 'FIELD'
              row['Field Name'] = (eachline.split(" ", 1)[1]).split(" ",1)[0].strip()
              row['Length'] = (eachline.split("(nPos,", 1)[1]).split(",",2)[1].replace(")","").strip()
    
    #atrributes = createXMLElements.setAttribues(row)
    atrributes = row
    if row['Type'] == 'LS':
        xsd_loop_start,xsd_loop_start_sequence = xmlobject.createLoopSegment(header_sequence,xsd_loop_start_sequence,atrributes)
    if row['Type'] == 'LE':
        xsd_loop_start,xsd_loop_start_sequence = xmlobject.getPreviousLoopNode(xsd_loop_start,xsd_loop_start_sequence)
    if row['Type'] == 'RC':
        field_value = 1
        sequence = xmlobject.createRecordSegment(header_sequence,xsd_loop_start_sequence,atrributes)
    elif row['Type'] != 'RC' and row['Type'] != 'LS' and row['Type'] != '' and row['Type'] == 'FIELD':
        print(field_value)
        if field_value == 1 :
             row['Default Value'] = row['Loop/Rec Name']
        else:
             row['Loop/Rec Name'] = "Record_"
            #row['Default Value'] = row['Field Name']
        xmlobject.createRecordFields(sequence,atrributes,field_value)
        field_value = field_value + 1
    #line_count = line_count + 1
    row['Type'] = ""

xml_str = (xsd_root.toprettyxml(indent="\t"))

with open("PHARDIS_BOL.inc.inc.xsd", "w") as f:
        f.write(xml_str)