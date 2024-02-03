# A minuscula 

# a = 'HElLo WoRld'
# print(a.lower())

# A Mayusucula
# b = 'Hello world'
# print(b.upper())

# Quita los espacios de los costados 
# s = '  Hello  World ' # quita los espacios despues de finalizar las expresiones 
# print(s.strip())


# pone en mayuscula la primera letra de la primera palabra 
# x = 'hola mundo'
# print(x.capitalize())
# y = 'HOLA Mundo'
# print(y.capitalize())

# usando una manera mas agresiva de convertir a minusculas
# x = 'HOLA MUNDO'
# print(x.casefold())

# centrara la cadena dentro de un ancho especificado
# st = 'hola mundo co'
# print(st.center(20))

#contara cuantas letras se repiten en el string 
# x = 'hola como estas'
# print(x.count('o'))

# designa el string usando el UTF-8 o el ASCII
# h = 'hola mundo'
# print(h.encode())

# determinando si termina con la cadena indicada True o False
# h = 'hola rex'
# print(h.endswith('rex'))

# expandiendo tabulaciones en cadenas
# t = 'hola \t gatos'
# print(t.expandtabs())

# buscara una subcadena y si la encuentra msotrara su indice 

# x = 'hola como estas' # mostrara el indice de donde empiza la palabra 
# print(x.find('como'))

# x = 'la diferencia esta a {} km, y debes de llamar a {}' # un formato para completar con variables designadas
# print(x.format(30,'george'))

# my_dict = {'nombre': 'george', 'edad': 21} # usando un diccionario para darle el formato de cadena, asignando donde van a ir los valores 
# my_string = 'hola mi nombre es {nombre} y tengo la edad de {edad}'
# print(my_string.format_map(my_dict))

# my_list = [1,2,3,4,5,6,7,8,9] # recorrera la lista y buscara en en indice se encuentra lo indicado en el index y nos mostrara su posicion 
# print(my_list.index(1))

# my_string = 'hola 3' # marcara false ya que no encuentra un numero en la palabra 
# my_string = 'hola3' # marcara true ya que si encontrar un numero en la palabra
# print(my_string.isalnum()) # verficiara si la cadena es alfanumerica 

# my_string = 'hola' # verficando si la cadena es alfabetica
# print(my_string.isapha())

# m_string = 'hello' # marcara true si la cadena contiene puros datos ascii pero sino marcara false
# print(m_string.isascii())

# x = '1234' # true si el string contiene solo digitos
# y = '123a4e' # false si el string no contiene solo digitos
# print(x.isdigit())
# print(y.isdigit())


# my_string = 'hola_como' # verficando si el identificador es valido en python recuerda que solo son validos las formas de variables 
# print(my_string.isidentifier())

# my_string = '1287321' # similar a isdigit pero validara a cadenas que no contienen caracteres numericos que no son digitos 
# print(my_string.isnumeric())

# my_string = 'hola mundo' # true si la cadena tiene caraacteres imprimibles
# m_string = 'hola\tmundo' # false si la cadena  no contiene caraacteres imprimibles

# print(my_string.isprintable())
# print(m_string.isprintable())

# my_string = ' \t\n' # comprobara si tiene espacios en blanco la cadena 
# print(my_string.isspace())









# Formatos de string
# 1er formato

# age = 36 
# txt = 'Mi nombre es George, tengo  {}'
# print(txt.format(age))

#2do formato 

# quantity = 3 
# itemno = 658
# price = 49.95
# my_order = 'yo tengo {} piezas de el item {} por {} dolares'
# print(my_order.format(quantity, itemno,price))


