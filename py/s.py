# USANDO IF ELSE

# print('semaforo')

# dato = input('digita el color del semaforo : ')

# if dato == 'verde':
    # print('cruzar la calle')
# else:
    # print('esperar')


#USANDO IF ELIF ELSE


# print('uso de tarjeta')

# gasto = float(input('digita la cantidad gastada : '))

# if gasto <=100:
    # print('pago con dinero en efectivo ')
# elif gasto >= 100 and gasto <= 300:
    # des = gasto * 0.10
    # t = gasto - des
    # print('pago con tarjeta de debito, y el total es ', t)
# else:
    # des = gasto * 0.10
    # t = gasto - des
    # print('pago con tarjeta de credito, y el total es ', t)


#USANDO WHILE 

# fecha = int(input('writing year please : '))

# while fecha <=2012:
    # print('Informes de ', fecha )
    # fecha +=1


# USANDO FOR

# lis = ['juan', 'ramon', 'javier', 'alexis','anderson', 'pedro','antonio']

# for en in lis:
    # print(en)


# def funcion(): 
    # print('hola mundo')

# frase = funcion()   # --- llamando desde una variable
# funcion()  --- forma sencilla de llamar 


#mandando valores a las funciones

# def funcion(nombre, apellido):
    
    # print('hola ', nombre, apellido)

# funcion('george', 'prado')


# mandando datos por omision 

# def sal(nombre, mensaje='hola'):
    # print (mensaje, nombre)

# sal('george')

#keywords como parametros 

# def sa(nombre, mensa='hola'):
    # print(mensa, nombre)

# sa(mensa='buen dia', nombre='juancho')

#DESEMPAQUETADO DE PARAMETROS 

# def calcular(importe, descuento):
    # return importe - (importe * descuento / 70)

# datos = [1500, 10]  #---- puedes usar una lista o una tupla
# print(calcular(*datos))   #--- con un asterisco procedera al nombre de la lista o tupla que sera pasada como un parametro 

# ahora usaremos un diccionario

# def calcular(importe, descuento):
    # return importe - (importe * descuento / 70)
    
# datos = {'importe': 1500, 'descuento': 10}
# print(calcular(**datos)) #-----OJO : not te olvides que aca si se debe de poner los dos asteriscos por su propiedad

# USANDO LLAMADAS DE RETORNO

# def fun():
    # return 'hola mundo'
# def sal(nombre, mensaje='hola'):
    # print(mensaje, nombre)
    # print(fun())
# usando de maneras globales

# def funcion():
    # return 'hola mundo'

# def lretorno(fun=''):
    # return(globals()[funcion]()) #--- retorno global

# print lretorno('funcion')

# name = 'funcion'
# print(locals()[funcion]())   #--- retorno local 

# Comprobando llamadas
# x = 5
# def funcion():
    # y = 10
    # print('variable global : ' , x)
    # print('variable local : ', y )

# funcion()

#SABER SI UNA FUNCION EXISTE
# def funcion(): 
    # print('hola, esto es una funcion')

# if callable(funcion):
    # try:
        # funcion()
    # except Exception as e:
        # print('Error al llamar a la funcion: ', e)        

# else:
    # print('La funcion no existe o no se puede llamar')


#LLAMADAS RECURSIVAS

# def facto(n):
    # if n== 0:
        # return 1
    # else:
        # return n * facto(n-1)

# resultado = facto(5)
# print(resultado)
    

#CLASES Y PROPIEDADES

# class Persona:
    # def __init__(self, nombre, edad):
        # self.nombre = nombre
        # self.edad = edad

    # def hablar(self):
        # print('hola, mi nombre es ', self.nombre, ' y tengo ', self.edad, ' year')

# class Estudiante(Persona):
    # def __init__(self, nombre, edad, carrera):
        # super().__init__(nombre, edad)
        # self.carrera = carrera
    # def hablar(self):
        # print('hola, soy', self.nombre, ' y estudio', self.carrera)


# def factorial(n):
    # if n == 0:
        # return 1
    # else:
        # return n * factorial(n-1)
    

# persona1 = Persona('george', 21)
# persona1.hablar()


# estudiante1 = Estudiante('amelia', 20, 'medicina')
# estudiante1.hablar()

# resultado = factorial(5)
# print(resultado)

# ACCEDIENDO A LOS METODOS Y PROPIEDADES DE UN OBJETO

# class persona:
    # def __init__(self, nombre):
        # self.nombre = nombre

    # def hablar(self):
        # print('hola, mi nombre es ', self.nombre)

# persona1 = persona('george')

# print(persona1.nombre)
# persona1.hablar()


# CONVERTIR A MAYUSCULA LA PRIMERA LETRA
# cadena = 'bienvenido a la aplicacion'
# print(cadena.capitalize())

#CONVERTIR UNA CADENA A MINUSCULAS
# cadena = 'HOLA MUNDO'
# print(cadena.lower())

#CONVERTIR A MAYUSCULAS 
# cadena = 'hola mundo'
# print(cadena.upper())


#CONVERTIR MAYUSUCLAS A MINUSCULAS Y VICEVERSA 

# cadena = 'hola Mundo'
# print(cadena.swapcase())


#CONVERTIR UNA CADENA EN FORMATO TITULO
# cadena = 'hola mundo'
# print(cadena.title()) # PONDRA SOLO LAS INICIALES EN MAYUSUCULAS

#CENTRAR UN TEXTO 
# cadena = 'bievenido a mi aplicacion'.capitalize()
# print(cadena.center(50, '='))

# print(cadena.ljust(50, '=')) # ESPACIO HACIA LA IZQIERDA

# print(cadena.rjust(50, '=')) # ESPACIO HACIA LA DERECHA 


# SI UNA CADENA ES ALFANUMERICA

# cadena = 'pepegrillo 75' # dara falso ya que no debe estar separado por un espacio
# print(cadena.isalnum())

# ca = 'pepegrillo75'
# print(ca.isalnum())

# SI UNA CADENA ES ALFABETICA

# cadena = '2423423'
# print(cadena.isalpha())

# ca  = 'george'
# print(ca.isalpha()) # usando el alfabetico ojo no puede haber ningun numero


#SI UNA CADENA ES NUMERICA

# cadena = 'porqui23'
# print(cadena.isdigit()) # solo es para numeros por eso dara falso

# ca  = '3224'
# print(ca.isdigit())

#SI UNA CADENA CONTIENE MINUSCULAS
# cadena = 'George D' # para ser true todo debe ser en MINUSCULAS
# print(cadena.islower())

#SI UNA CADENA CONTIENE MAYUSCULAS
# ca = 'Sarmiento Bellido' # para que de verdadero toda la cadena debe ser en MAYUSCULAS
# print(ca.isupper())
#SI UNA CADENA CONTIENE ESPACIOS 
# c = 'Esto es una cadena larga' # solo tiene que estaar el ESPACIO 
# print(c.isspace())

 
#METODOS DE SUSTITUCION

# cadena = 'bienvenido a mi aplicaion  {0}' # agrega por el formato 
# print(cadena.format('en python '))

#REEMPLZAR EL TEXTO DE UNA CADENA

# buscar = 'nombre apellido' # busca la similud en el texto y lo reserva para cambiarlo 
# reemplazar = 'Juan Perez'
# print('Estimado Sr.nombre apellido :'.replace(buscar, reemplazar) )

#METODOS DE UNION Y DIVISION
#UNIR UNA CADENA DE FORMA ITERATIVA 

# formatoF = (' N 0000-0', '-0000 (ID: ',  ' )')
# numero = '275'
# numeroCompleto = numero.join(formatoF) # el numero se incluira dentro de cada coma 
# print(numeroCompleto)

# SEPARADOR DE CADENA EN TRES PARTES
# tupla = 'http://www.ramoncandela.com'.partition('www.')
# print(tupla)

# protocolo, separador, dominio = tupla 
# print('Protocolo : {0}\nDominio: {1}'.format(protocolo, dominio))

#SEPARANDO UNA CADENA EN VARIAS PARTES
# keywords = 'python, guia, curso, tutorial'.split(', ')
# print(keywords)













