print('hola mundo');

io.write("hello world, from",_VERSION, "!\n");

-- identificador, una constante, uns string literal o un simbolo

-- KEYWORDS MAS USADAS
-- and - break - do - else - elseif - end - false - for - function - if - in - local - n
-- il - not - or - repeat
-- return - then - true - until - while 

-- declarando variables locales
-- local d , f = 5,10

-- d, f = 5, 10
-- d, f = 10 -- aqui f es nulo 


-- definiendo variables
local a,b
-- iniciando variables
a = 10
b = 30

print("el valor de a : ", a)
print("el valor de b : ", b)

b , a = a, b

print("el valor de a : ", a)

-- lvalues en lua 
-- rvalues en lua

-- tipos de datos 

-- nil - boolean - number - string - function - userdata - table - 

-- string
print(type('What is my type'))
-- number
t = 10
print(type(5.8*t))
-- boolean
print(type(true))
-- function
print(type(print))
-- function
print(type(type))
--nil -- valor nulo o que no tiene valor 
print(type(nil))

-- OPERADORES ARITMETICOS
-- son los siguientes : + - * / % ^ 
-- OPERADORES RACIONALES 
-- son los siguientes : == ~= > < >= <= 

a = 2
b = 10

if(a == b)
then
  print("line 1 - a es igual a b ")
else
  print("Line 1 - a no es igual a b")
end

-- OPERADORES LOGICOS 
-- and - or - not

a = 5
b = 8

if(a and b)
then
  print("Line 1 - Condition is true")
end

-- concadenando dos string
pr1 = "hola"
pr2 = "mundo"
print(pr1..pr2)

-- longitud de la candena
pala = "aqui andamos"
print(#pala)

-- tabla
print('tabla')
tabla = {10,20,30}
valor = tabla[2]
tabla[3] = 40
print(valor)
print(tabla)


-- PRECEDENCIA DE OPERADORES EN LUA
-- not #~          derecha a izquierda
-- ..              derecha a izquierda
-- */%             izquierda a derecha
-- +-              izquierda a derecha
-- <> <= >= == ~=  izquierda a derecha
-- == ~=           izquierda a derecha
-- and             izquierda a derecha
-- or              izquierda a derecha

-- LOOPS

-- while loop
-- for loop
-- repeat...until loop
-- nested loops

-- WHILE
a = 10
while(a<20) do
  print("value of a : ", a)
  a = a + 1
end

-- FOR
-- tenemos el min y max, por otro lado podemos incrementar y decreemntar
-- iteracion numerica
for i=10,1,-1 do
  print(i)
end

frutas = {'manzana', 'naranja', 'platano'}
for i, fruta in ipairs(frutas) do
  print(fruta)
end

-- REPEAT...UNTIL LOOP
a = 10
repeat
  print("value of a : ", a)
  a = a+1
until(a > 15)

-- NESTED LOOPS
print("NESTED LOOPS")
j = 2
for i = 2, 10 do
  for j = 2, (i/j), 2 do
    if(not(i%j))
    then
      break
    end
    if(j>(i/j))then
      print("Value of i is ", i)
    end
  end
end

-- BREAK STATEMENT

a = 10

while(a < 20)
do
  print("value of a :", a)
  a = a + 1
  if(a < 15)
  then
    break
  end
end

-- EL BUCLE INFINITO
-- while(true)
-- do
  -- print("This loop will run forever");
-- end

-- ITERAR SOBRE LA TABLA
frutas = {'manzana', 'naranja', 'platano', 'uva'}
for i, fruta in ipairs(frutas) do
  if fruta == 'platano' then
    break -- salir cuando se encuentra en platano
  end
  print(fruta)
end

-- SALIDA DE UN BUCLE ANIDADO
for i =1,3 do
  for j = 1,3 do
    if i +j>=5 then
      break
    end
    print(i,j)
  end
end

-- RETURN 
function maximo(a,b)
  if a>b then
    return a
  else
    return b
  end
end

mayor= maximo(5,10)
print(mayor)

function calculos(x,y)
  suma = x+y
  resta = x-y
  return suma, resta
end

s,r = calculos(10,5)
print(s)
print(s)

-- TOMA DE DECISIONES 

a = 10
if(a<20) then
  print("a is less than 20")
end
print("value of a is : ",a)


-- llamando desde una carpeta externa
-- lib1.lua
-- function norm(x,y)
  -- return(x^2 + y^2)^0.5
-- end

-- function twice(x)
  -- return 2*x
-- end

--prueba.lua
-- dofile("lib1.lua")
-- n = norm(3.4,1.0) 
-- print(twice(n))

--IF...ELSE 
a = 100
if(a<20) then
  print("a is less than 20")
else
  print("a is not less than 20")
end
print("value of a is :", a)

--IF...ELSE IF...ELSE
print("\n")
print("if..else if...else")
a = 10
if(a == 10) then
  print("value of a is 10")
elseif(a == 20) then
  print("value of a is 20")
elseif(a == 30) then
  print("Value of a is 30 ")
else
  print("NOne of the values is matching")
end
print("Exact value of a is : ", a)

--NESTED
print("\n")
print("nested")
a = 100
b = 200

if(a == 100)
then
  if(b == 200)
  then
    print("value of a is 100 and b is 200")
  end
end

print("Exact value of a is : ", a)
print("Exact value of b is : ", b)



-- declarando variables locales
-- local d , f = 5,10

-- d, f = 5, 10
-- d, f = 10 -- aqui f es nulo 


-- definiendo variables
local a,b
-- iniciando variables
a = 10
b = 30

print("el valor de a : ", a)
print("el valor de b : ", b)

b , a = a, b

print("el valor de a : ", a)

-- lvalues en lua 
-- rvalues en lua

-- tipos de datos 

-- nil - boolean - number - string - function - userdata - table - 

-- string
print(type('What is my type'))
-- number
t = 10
print(type(5.8*t))
-- boolean
print(type(true))
-- function
print(type(print))
-- function
print(type(type))
--nil 
print(type(nil))

-- OPERADORES ARITMETICOS
-- son los siguientes : + - * / % ^ 
-- OPERADORES RACIONALES 
-- son los siguientes : == ~= > < >= <= 

a = 2
b = 10

if(a == b)
then
  print("line 1 - a es igual a b ")
else
  print("Line 1 - a no es igual a b")
end

-- OPERADORES LOGICOS 
-- and - or - not

a = 5
b = 8

if(a and b)
then
  print("Line 1 - Condition is true")
end

-- concadenando dos string
pr1 = "hola"
pr2 = "mundo"
print(pr1..pr2)

-- longitud de la candena
pala = "aqui andamos"
print(#pala)

-- PRECEDENCIA DE OPERADORES EN LUA
-- not #~          derecha a izquierda
-- ..              derecha a izquierda
-- */%             izquierda a derecha
-- +-              izquierda a derecha
-- <> <= >= == ~=  izquierda a derecha
-- == ~=           izquierda a derecha
-- and             izquierda a derecha
-- or              izquierda a derecha

-- LOOPS

-- while loop
-- for loop
-- repeat...until loop
-- nested loops

-- WHILE
a = 10
while(a<20)
do
  print("value of a : ", a)
  a = a + 1
end

-- FOR
-- tenemos el min y max, por otro lado podemos incrementar y decreemntar
for i=10,1,-1
do
  print(i)
end

-- REPEAT...UNTIL LOOP
a = 10

repeat
  print("value of a : ", a)
  a = a+1
until(a > 15)

-- NESTED LOOPS
print("NESTED LOOPS")
j = 2
for i = 2, 10 do
  for j = 2, (i/j), 2 do
    if(not(i%j))
    then
      break
    end
    if(j>(i/j))then
      print("Value of i is ", i)
    end
  end
end

-- BREAK STATEMENT

a = 10

while(a < 20)
do
  print("value of a :", a)
  a = a + 1
  if(a < 15)
  then
    break
  end
end

-- EL BUCLE INFINITO
-- while(true)
-- do
  -- print("This loop will run forever");
-- end


-- TOMA DE DECISIONES 

a = 10
if(a<20)
  then
  print("a is less than 20")
end
print("value of a is : ",a)

--funciones
function max(num1, num2)
  if(num1>num2)then
    result = num1;
  else
    result = num2;
  end
  return result;
end

print(max(2,5))

-- funciones
function factorial(n)
  if n == 0 then
    return 1
   else
    return n*factorial(n-1)
  end
end

print("ingrese el numero : ")
a = io.read("*number")
print(factorial(a))

-- asignar y pasar funciones --- funciones anonimas
myprint = function(param)
  print("Esta es mi primera funcion - ##", param, "##")
end

function add(num1,num2,functionPrint)
  result = num1 + num2
  functionPrint(result)
end
myprint(10)
add(2,5,myprint)

-- funcion con argumento variable
print("funciones con argumentos")
function average(...)
  result = 0
  local arg={...}
  for i,v in pairs(arg) do
    result = result + v
  end
  return result/#arg
end

print("The average is", average(10,5,3,4,5,6))

-- string
string1 = "lua"
print("\"String1 is\"",string1)

string2 = 'Tutorial'
print("string2 is", string2)

string3 = [["lua tutorial"]]
print("String 3 is ", string3)

-- MANIPULACION DE ARGUMENTOS

-- string.upper() --mayusulas

-- string.lower() -- minusculas
--
-- frase = "hola mundo viejo"
-- string.find(frase, "mundo") -- devuelve las posiciones de inicio y de fin de mundo
--
-- frase = "aqui hay un mundo nuevo"
-- string.match(frase, "hola (%a+)") -- captura el nombre despues de hola 

--          cadena principal, encontrar cadena, reemplazar cadena
-- string.gsub(mainString,findString,replaceString) -- sustiendo

--    cadena principal, encontrar cadena, opcional indice de inicio, opcional indice final 
-- string.strfind(mainString, findString,optionalStartIndex,optionalEndIndex)

-- string.reverse(arg) -- invierte la cadena 

-- string.format(...) -- devuelve una cadena formateada
string1 = "lua"
string2 = 'tutorial'
number1 = 10
number2 = 20
print(string.format("Basic formatting %s %s",string1, string2))


-- string char(arg) and string.byte(arg) -- devuelve representaciones internas numéricas y de caracteres del argumento de entrada

-- string.len(arg) -- retorna la longitud del string

-- string.rep(string,n) -- devuelve una cadena repitiendo la misma cadena n número de veces

frase = "hola george"
nombre = string.match(frase, "hola (%a+)")
print(nombre)

-- .. -- operador que concadena dos strings

-- ARRAYS

-- ONE-DIMENSIONAL ARRAY

array = {"Lua", "Tutorial"}
for i =0, 2 do
  print(array[i])
end

-- MULTIDIMENSIONAL ARRAY
array = {}
for i= 1,3 do
  array[i] = {}
    for j=1,3 do
      array[i][j] = i*j
    end
end

for i =1,3 do
  for j=1,3 do
    print(array[i][j])
  end
end

-- manipulando indices en MULTIDIMENSIONAL
array = {}
maxRows = 3
maxColumns = 3
for row=1, maxRows do 
  for col=1,maxColumns do
    array[row*maxColumns + col]= row*col
  end
end

for row=1, maxRows do
  for col=1, maxColumns do
    print(array[row*maxColumns + col])
  end
end

-- ITERADORES
array ={'lua', 'Tutorial'}
for key, value in pairs(array)
do 
  print(key,value)
end

-- ITERADOR SIN ESTADO
function square(iteratorMaxCount, currentNumber)
  if currentNumber<iteratorMaxCount
  then
    currentNumber = currentNumber+1
  return currentNumber, currentNumber * currentNumber
  end
end

for i, n in square,3,0
do
  print(i,n)
end



-- DICCIONARIO
diccionario = {nombre ='george',edad = 21}
print(diccionario.nombre)

-- HILOS
local function tarea()
  
  for i =1, 10 do
    print(i)
  end
end

local hilo = coroutine.create(tarea)
coroutine.resume(hilo)

-- USERDATA

-- generalmente se usa con C
-- local usuario = newuserdata(1024)
-- usuario = nil

-- TABLAS COMO ARREGLOS
frutas = {'manzana', 'naranja','platano'}
print(frutas[1])
print(frutas[3])

frutas[2] = 'pera'
print(frutas[2])

for i = 1, #frutas do
  print(frutas[1])
end

-- TABLA COMO DICCIONARIO
persona = {nombre ='george', edad=21, casado = false}
print(persona.nombre)
print(persona['edad'])

persona.edad = 22
print(persona.edad)

for clave, valor in pairs(persona) do
  print(clave, valor)
end

-- operaciones con tablas
numeros = {}
table.insert(numeros,10)
table.insert(numeros,1,20)
-- elimina la posicion
table.remove(numeros,2)
print('por longitud')
for i = 0, #numeros do
  print(numeros[i])
end

print('por recorrido por tabla')
for clave,valor in pairs(numeros) do
  print(clave,valor)
end

print('recorrido por formato')
for i = 1, #numeros do
    print(string.format("%d", numeros[i]))
end

print('concadenando')
cadena = table.concat(numeros, " , ")
print(cadena)

-- usando sort en una tabla
nombres = {'pedro','markino','ana', 'carlos', 'maria','armando' }
table.sort(nombres)
for i = 0, #nombres do
  print(nombres[i])
end

-- concatenando
frutas = {'manzana', 'naranja', 'platano'}
cadena = table.concat(frutas, ' , ')
print(cadena)

--TRABAJANDO CON MODULOS
-- se crea otro archivo
--modulo.lua
local M = {}
--funcion privada
local function sumaPrivada(a,b)
  return a,b
end

-- funcion publica
function M.sumar(a,b)
  return sumaPrivada(a,b)
end

-- return M

-- usando el modulo en el principal
local modulo = require("modulo")
resultado = modulo.sumar(2,3) 
print(resultado)

-- USANDO PAQUETES
-- mi_paquete/
  -- __init__.lua
  -- utils.lua

-- en el paquete de init

local M ={}
M.utils = require("mi_paquete.utils")
-- return M

-- mi_paquete/utils.lua
local M = {}
function M.sumar(a,b)
  return a + b
end 

-- return M

local mipaquete = require("mipaquete")
resultado = mipaquete.utils.sumar(2,3)
print(resultado)


-- ESTRUCTURA CORRECTA DE DIRECTORIOS
-- proyecto/
--     src/ -- contiene modulos de codigo fuente 
--         modulo1.lua
--         modulo2.lua
--         ...
--     tests/ -- modulos que contiene las pruebas unitarias de los modulos
--         test_modulo1.lua
--         test_modulo2.lua
--         ...
--     main.lua -- archivo principal que importa y utiliza los modulos
--


-- DEFINICION DE UN OBJETO PERSONA
local Persona = {
  nombre = "",
  edad = 0,
}

-- metodo
function Persona:saludar()
  print("Hola, me llamo".. self.nombre)
end

function Persona:cumplirAnios()
  self.edad = self.edad + 1
end

-- creacion de instancias
local persona1 = {
  nombre = "juan",
  edad = 30,
}

-- Acceder a las propiedades 
print(persona1.nombre)
print(persona1.edad)

-- llamar a los metodos
persona1:saludar()
persona1:cumplirAnios()

-- asignar metodos a la instancia
-- setmetatable = sirve para asignar metodos al objeto
setmetatable(persona1, {__index = Persona})

-- Herencia
local Animal = {
  nombre = "",
  sonido = "",
}

function Animal:hacerSonido()
  print(self.sonido)
end

local Perro = {sonido = "Guau"}
setmetatable(Perro, {__index = Animal})

local miPerro = {nombre = "firulais"} --
setmetatable(miPerro, {__index = Perro})

miPerro:hacerSonido()


-- METATABLES
mi_tabla = {}

metatabla = {

}
-- Asociar la metatabla a la tabla
setmetatable(mi_tabla, metatabla)

-- METAMETODOS
-- __index : se invoca cuando se intenta acceder a una clave inexistente en la tabla 
-- __newindex : se invoca cuando se intenta asignar un valor a una clave inexistente en la tabla
-- __add, __sub, __mul,__div : se invoca cuando se realiza operaciones aritmeticas con la tabla
-- __concat: se invoca cuando se concatena la tabla con una cadena 
-- __tostring: se invoca cuando se intenta convertir la tabla a una cadena
-- __call : se invoca cuando se llama la tabla como una funcion

metatabla = {
  __index = function (tabla,clave)
    print("Accediendo a la clave existente :" ..clave)
    return nil
  end,
  __newindex = function (tabla, clave, valor)
    print('Asignando el valor')
    rawset(tabla,clave,valor)
  end,

  __add = function (tabla1, tabla2)
  end
}

mi_tabla = {}
setmetatable(mi_tabla, metatabla)

valor = mi_tabla.clave_inexistente

mi_tabla.nueva_clave = 10


-- |: Alternancia (coincide con una u otra expresión).
-- *: Coincide con 0 o más repeticiones.
-- +: Coincide con 1 o más repeticiones.
-- ?: Coincide con 0 o 1 repetición.
-- []: Conjunto de caracteres.
-- (): Grupo de captura.

-- buscar una palabra que comience por ca o co
patron = regex.new("(ca|co)%a*")
-- patron = new("(ca|co)%a*")
-- solo si regex tiene la palabras
patron = regex.new("(ca|co)%a*")
print(patron:match("Carro"))

--buscar un numero de cuatro digitos seguido de una letra
patron = regex.new("%d%d%d[a-z]")
print(patron:match("2023a"))

-- sustituir todos los espacios en blanco por guiones
patron = regex.new("%s")
print(regex.gsub("hola mundo cruel", patron, "-"))


-- APERTURA DE ARCHIVOS

-- i.open
archivo, err = io.open("ruta/del/archivo.txt", "r")

-- modos de apertura mas comunes son 
-- "r": Modo lectura (valor por defecto)
-- "w": Modo escritura (sobrescribe el archivo si existe)
-- "a": Modo añadir (agrega al final del archivo)
-- "r+"; Modo lectura y escritura
-- "b": Modo binario (utilizado junto con otros modos, como "rb" o "wb")

-- LECTURA DE ARCHIVOS

-- leer todo el archivo como una cadena
contenido = archivo:read("*a")
-- leer una linea
linea = archivo:read("*l")
-- leer un numero
numero = archivo:read("*n")

-- iteramso sobra las lineas de un archivo

for linea in archivo:lines() do
  print(linea)
end

-- Escritura de archivos
archivo = io.open("ruta/del/archivo.txt", "w")
archivo:write("hola mundo")
archivo:close()

-- cierre de archivos
archivo:close()

-- trabajando con una forma de io.open() y con finally

archivo,err = io.open("ruta/del/archivo.txt", "w")
if archivo then
  finally
    archivo:close()
end

-- SEPARADOR DE RUTAS

-- Esto se puede obtener mediante la variable global package.config
separador_rutas = package.config:sub(1,1)
-- en windows |
-- en linux   /

-- OBTENER EL NOMBRE DEL ARCHIVO SIN LA RUTA
function obtener(ruta)
  return string.match(ruta,"[^"..separador_rutas.."]+$")
end

print(obtener("C:\\Archivos\\ejemplo.txt"))


-- OBTENER LA RUTA SIN EL NOMBRE DEL ARCHIVO
function obtener(ruta)
  return string.match(ruta, "(..+)"..separador_rutas)
end

print(obtener("C:\\Archivos\\ejemplo.txt"))


-- COMBINAR LA RUTA

function combinar(ruta)
  if string.sub(ruta2, 1,1) == separador_rutas then
    return ruta2
  else
    return ruta .. separador_rutas .. ruta2
  end
end

print(combinar("C:\\Archivos","ejemplo.txt"))

-- verificar si la ruta es absoluta o relativa
function es_ruta(ruta)
  return string.sub(ruta,1,1) == separador_rutas or
    string.match(ruta, "^%a%:")
end

print(es_ruta("C:\\Archivos\\ejemplo.txt"))
print(es_ruta("ejemplo.txt"))

-- Integración con frameworks de juegos (Love2D, Corona, etc.)

