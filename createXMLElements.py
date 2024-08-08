from xml.dom import minidom
class createXMLElements:
    def __init__(self):
        self.xsd_root = minidom.Document()

    def getXSDROOT(self):
        return self.xsd_root

    def createRoot(self,project_name,schema_name):
        xsd_root = self.getXSDROOT()
        xsd_schema_root = xsd_root.createElement('xsd:schema')
        xsd_schema_root.setAttribute("xmlns", "http://www.seeburger.com/" + project_name + "/" + schema_name)
        xsd_schema_root.setAttribute("xmlns:bic", "http://www.seeburger.com/bicng/lang/schema/")
        xsd_schema_root.setAttribute("xmlns:inhouse", "http://www.seeburger.com/bicng/lang/schema/inhouse")
        xsd_schema_root.setAttribute("xmlns:xsd", "http://www.w3.org/2001/XMLSchema")
        xsd_schema_root.setAttribute("bic:messageType", "INHOUSE")
        xsd_schema_root.setAttribute("elementFormDefault", "qualified")
        xsd_schema_root.setAttribute("targetNamespace", "http://www.seeburger.com/" + project_name + "/" + schema_name)

        xsd_root.appendChild(xsd_schema_root)

        xsd_import_element = xsd_root.createElement('xsd:import')
        xsd_import_element.setAttribute("namespace", "http://www.seeburger.com/bicng/lang/schema/inhouse")
        xsd_import_element.setAttribute("schemaLocation", "platform:/plugin/com.seeburger.bicng.lang.schema.facade.inhouse"
                                                          "/resources/inhouse.xsd")

        xsd_schema_root.appendChild(xsd_import_element)
        xsd_schema_header = xsd_root.createElement('xsd:element')
        xsd_schema_header.setAttribute('name', schema_name)
        xsd_schema_root.appendChild(xsd_schema_header)

        header_ComplexType = xsd_root.createElement('xsd:complexType')
        xsd_schema_header.appendChild(header_ComplexType)

        header_ComplexContent = xsd_root.createElement('xsd:complexContent')
        header_ComplexType.appendChild(header_ComplexContent)

        header_extension = xsd_root.createElement('xsd:extension')
        header_ComplexContent.appendChild(header_extension)
        header_extension.setAttribute('base', 'inhouse:InhouseMessageRoot')

        header_sequence = xsd_root.createElement('xsd:sequence')
        header_extension.appendChild(header_sequence)
        return xsd_root,header_sequence
    
    def createLoopSegment(self,header_sequence,xsd_loop_start_sequence,row):
        xsd_root = self.getXSDROOT()
        xsd_loop_start = xsd_root.createElement('xsd:element')
        if xsd_loop_start_sequence == '':
            header_sequence.appendChild(xsd_loop_start)
        else:
            xsd_loop_start_sequence.appendChild(xsd_loop_start)
        xsd_loop_start.setAttribute('maxOccurs', row['maxOccurs'])
        xsd_loop_start.setAttribute('minOccurs', row['minOccurs'])
        xsd_loop_start.setAttribute('name', row['Loop/Rec Name'])
        ComplexType = xsd_root.createElement('xsd:complexType')
        xsd_loop_start.appendChild(ComplexType)
        ComplexContent = xsd_root.createElement('xsd:complexContent')
        ComplexType.appendChild(ComplexContent)
        extension = xsd_root.createElement('xsd:extension')
        extension.setAttribute('base', "inhouse:InhouseSegmentGroup")
        ComplexContent.appendChild(extension)
        xsd_loop_start_sequence = xsd_root.createElement('xsd:sequence')
        extension.appendChild(xsd_loop_start_sequence)
        return xsd_loop_start,xsd_loop_start_sequence

    def createRecordSegment(self,header_sequence,xsd_loop_start_sequence,row):
        #print('inside')
        xsd_root = self.getXSDROOT()
        xsd_record_segment = xsd_root.createElement('xsd:element')
        if xsd_loop_start_sequence == '':
            header_sequence.appendChild(xsd_record_segment)
        else:
            xsd_loop_start_sequence.appendChild(xsd_record_segment)
        xsd_record_segment.setAttribute('maxOccurs', row['maxOccurs'])
        xsd_record_segment.setAttribute('minOccurs', row['minOccurs'])
        xsd_record_segment.setAttribute('name', row['Loop/Rec Name'])
        ComplexType = xsd_root.createElement('xsd:complexType')
        xsd_record_segment.appendChild(ComplexType)
        ComplexContent = xsd_root.createElement('xsd:complexContent')
        ComplexType.appendChild(ComplexContent)
        extension = xsd_root.createElement('xsd:extension')
        extension.setAttribute('base', "inhouse:Segment")
        ComplexContent.appendChild(extension)
        sequence = xsd_root.createElement('xsd:sequence')
        extension.appendChild(sequence)
        return sequence
    
    def createRecordFields(self,sequence,row,field_value):
        xsd_root= self.getXSDROOT()
        field = xsd_root.createElement('xsd:element')

        if row['Default Value'] != '':
            field.setAttribute('default', row['Default Value'])
        field.setAttribute('maxOccurs', row['maxOccurs'])
        field.setAttribute('minOccurs', row['minOccurs'])
        
        field.setAttribute('name', row['Field Name'])
        sequence.appendChild(field)

        if field_value == 1 :
            field_annot = xsd_root.createElement('xsd:annotation')
            field.appendChild(field_annot)
            app_info = xsd_root.createElement('xsd:appinfo')
            app_info.setAttribute('source','http://www.seeburger.com/bicng/lang/schema/')
            field_annot.appendChild(app_info)
            ident_field = xsd_root.createElement('identifyingField')
            ident_field.setAttribute('xmlns','http://www.seeburger.com/bicng/lang/schema/inhouse')
            app_info.appendChild(ident_field)
            ident_field_value = xsd_root.createTextNode("true")
            ident_field.appendChild(ident_field_value)
            Name = "KEY"

        field_type = xsd_root.createElement('xsd:simpleType')
        field.appendChild(field_type)
        restr = xsd_root.createElement('xsd:restriction')
        field_type.appendChild(restr)
        restr.setAttribute('base', "inhouse:AN")
        fieldlength = xsd_root.createElement('xsd:length')
        restr.appendChild(fieldlength)
        fieldlength.setAttribute('value', row['Length'].split('.')[0])

        if field_value == 1:
            enum = xsd_root.createElement('xsd:enumeration')
            enum.setAttribute('value',row['Default Value'])
            restr.appendChild(enum)

    def getPreviousLoopNode(self,xsd_loop_start,xsd_loop_start_sequence):
        xsd_loop_start_sequence = xsd_loop_start.parentNode
        xsd_loop_start = xsd_loop_start.parentNode
        while(xsd_loop_start.localName != 'element'):
            xsd_loop_start = xsd_loop_start.parentNode
        return xsd_loop_start,xsd_loop_start_sequence
    
    def setAttribues(row):
        try:
            min_occur = row['min occ']
            max_occur = row['max occ']
        except:
            min_occur = row['Occ'].split('.')[0]
            max_occur = row['Occ'].split('.')[-1]
        if min_occur == 'M':
            min_occur = 1
        elif min_occur == 'O':
            min_occur = 0
        else:
            min_occur = 0
        if max_occur == 'M':
            max_occur = 1
        elif max_occur == 'O':
            max_occur = 1
        else:
            max_occur = 1
        if max_occur == '*' or max_occur == '':
            max_occur = 'unbounded'
        if min_occur == '':
            min_occur = '0'
        if "(" and ")" in row['Loop/Rec Name'] :
            Name = row['Loop/Rec Name'].split("(")[1]
        else :
            Name = row['Loop/Rec Name'].replace(" ","_")
        atrributes = {}
        atrributes['Loop/Rec Name'] = Name
        atrributes['maxOccurs'] = max_occur
        atrributes['minOccurs'] = min_occur
        #atrributes['Default Value'] = row['Default Value']
        if "(" and ")" in row['Field Name'] :
            atrributes['Field Name'] =row['Field Name'].split("(")[1].split(")")[0]
        else :
            atrributes['Field Name'] = row['Field Name'].replace(" ","_")
        atrributes['Length'] = row['Length']
        try:
            if( "\"" in row['Default Value']):
                default_value = row['Default Value']
                atrributes['Default Value'] = default_value.split("\"")[1]
            else:
                atrributes['Default Value'] = ""
        except:
            atrributes['Default Value'] = ""
        return atrributes