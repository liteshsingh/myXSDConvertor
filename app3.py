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


file1 = open("shpmnt05_gss_shpmnt05_iftmin99b_002.fde", "r+")
 
file1.seek(0)
 
for lines in file1 :
    if "STRINGA" in lines:
        print(lines)