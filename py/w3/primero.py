# formas de usar una variable 

# myvar = 'george'
# my_var = 'prado'
# _my_var = 'david'
# myVar = 'george'
# MYVAR = 'david'
# myvar2 = 'prado'

# multiples variables 

# x,y,z = 'orange', 'blue', 'red' -- para cada uno una variable
# x=y=z = 'orange'  -- para todos la misma variable

# fruits = ['apple', 'banana', 'cherry']
# x,y,z = fruits -- haciendo valer para cada uno de la lista una variable
# print(x)
# print(y)
# print(z)
    
#  Usando variables globales de diferentes formas 

# 1ra funcion global
# x = 'awesome'

# def myfunc():
    # print('python is' + x)

# myfunc() 

#2da funcion

# x = 'awesome' # variable global
#
# def myfunc():
    # x = 'fanstactic'  # variable local  
    # print('python is ' + x)

# myfunc()

# print('python is ' + x)

# def myfunc():
   # global x # nominando a una variable de manera global 
   # x = 'fanstactic'

# myfunc()
# print('python is ' + x)

# Tipos_de_python

'''str -- string
   int -- enteros, float -- flotantes , complex -- complejos
   list -- lista, tupla -- tuplas, range -- rangos 
   dict -- dicionarios
   set -- elemento de set iguales a las listas pero los elementos son unicos, agrupas{}, llamas()
   fronzenset -- son similares a los set pero son inmutables, no pueden cambiar cuando ya son definidos, fronzenset([iterables])
   bool -- que son los boleanos
   bytes -- tipo de binario 
   bytesarray -- lista de bytes 
   memorview -- vista de memmoria 
   NoneType -- usando el (none) en su representacion
   '''

# x = range(0,6)
# print(x)









