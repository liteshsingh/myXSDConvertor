import re

def extract_values(template):
    pattern = r'<(.*?)>'  # Regex pattern to match values between '<' and '>'
    matches = re.findall(pattern, template)  # Find all matches of the pattern in the template
    
    for match in matches:
        print(match)

# Example usage
template1 = "<PARTNER>_<EDIMESSAGE>_SUPPLIER_ID_<SUPPLIER_ID>"
extract_values(template1)

template2 = "<PARTNER>_<EDIMESSAGE>_BUYER_ID_<BUYER_ID>"
extract_values(template2)
