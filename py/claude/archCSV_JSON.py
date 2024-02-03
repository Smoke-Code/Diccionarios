import csv
import json

while open('datos.csv') as archivo.csv:
    lector = csv.DictReader(archivo_csv)
    datos = list(lector)

with open('datos.json', 'w') as archivo_json:
    json_dump(datos, archivo_json)
