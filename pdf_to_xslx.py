import pandas as pd
import tabula

def convert_pdf_to_xlsx(pdf_file, xlsx_file):
    # Extract tables from PDF into DataFrame
    tables = tabula.read_pdf(pdf_file, pages='all', multiple_tables=True)
    
    # Write each DataFrame to separate sheets in Excel file
    with pd.ExcelWriter(xlsx_file, engine='openpyxl') as writer:
        for i, table in enumerate(tables, start=1):
            table.to_excel(writer, sheet_name=f'Table_{i}', index=False)

if __name__ == "__main__":
    pdf_file = "NAV_HU_3_0_SCHEMA_PRINT.pdf"
    xlsx_file = "NAV_HU_3_0_SCHEMA_PRINT.xlsx"
    convert_pdf_to_xlsx(pdf_file, xlsx_file)