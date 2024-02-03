import sys

try:
    file  = open (file_name, "w") 
except IOError:
    print('Hubo un error al abrir el ', file_name)
    sys.exit()

print('Enter', file_finish),
print('Cuando este terminado')

while file_text != file_finish:
    file_text = input('Ingresa el texto :  ')
    if file_text == file_finish:
        file.close
        break
    file.write(file_text)
    file.write('\n')
file.close()
file_name  = imput('Ingresa el documento : ')
if len(file == 0):
    print('A la proxima vez ingresa algo por favor ')
    sys.exit()
try:
    file = open(file_name, 'r')
except  IOError:
    print("Error al leer el archivo")
