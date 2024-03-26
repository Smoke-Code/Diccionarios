// console.log("hola mundo");
// let saludo = 'hola mundo';
// let saludo = "hola mundo"';
// let saludo = `hola mundo`;
// 
// alert(saludo); -- una ventana emergente

// let n1 = 1;  // nominando una variable
// let n2 = 3;
// let suma = n1 + n2;
// alert(suma);

// const nombre = 'george'; -- usando una constante
// alert(nombre);

// prompt('hola mundo'); -- ventana emergente para pedir datos con prompt 

// la variable es que va a ser vacia 
// let numero = null;

// NaN sale cuando quieres hacer una operacion con algo que no es numero 
// Undefined sale cuando algo no esta definido

// valores de asignacion 

// let x = 10;
// let y = 5;
// let suma = x + y;
// document.write(suma);

// let numero = 5;
// let numero2 = 'pedro';

// alert(numero + numero2);
// alert(numero * numero2); = aqui indica NaN

// OPERADORES DE JAVASCRIPT

// let a = y; // x = y -- para las asignacion
// let x += y; // x = x + y  -- para la asignacion de adicion 
// let x -= y; // x = x - y  -- para la asignacion de sustraccion 
// let x *= y; // x = x * y  -- para la asignacion de multiplicacion 
// let x /= y; // x = x / y  -- para la asignacion de division 
// let x %= y; // x = x % y  -- para la asignacion de resto 
// let x **= y; // x = x ** y  -- para la asignacion de exponencia 
// let x <<= y; // x = x << y  -- para la asignacion de desplazamiento a la izquierda 
// let x >>= y; // x = x >> y  -- para la asignacion de desplazamiento a la derecha 
// let x &= y; // x = x &= y  -- para la asignacion AND 
// let x ^= y; // x = x ^= y  -- para la asignacion XOR 
// let x |= y; // x = x |= y  -- para la asignacion OR 
// let x--                    -- para descender despues 
// let --x                    -- para descender antes 
// let ++x                    -- para ascender antes 
// let x--                    -- para ascender despues 

// CONCADENANDO 

// num = '53';
// num2 = '8';
// frase = num.concat(num2);
// document.write(frase);

// nombre = 'george david';
// frase = 'soy ' + nombre + ' y estoy caminando';
// CUANDO QUIERAS USAR CODIGO HTML EN JS DEBES USAR LOS BACKTICS ``
// frase = `<h1>HOLA AMIGO</h1>
// <p> Como estas amigo</p>`;
// document.write(frase);

// PARA USAR UNA SALIDA DE COMILLAS SIMPLES Y DOBLES
// '"'
// "''"
// OPERADORES LOGICOS Y COMPARACION
//txt == txt2 -- igualdad // true o false
//txt != txt2 -- desigualdad // true o false
//txt === txt2 --comparacion estricta// true o false
//txt !== txt2 --desigualdad estricta // true o false
//txt > txt2   --si txt es mayor 
//txt < txt2   --si txt es menor
//txt >= txt2   --si txt es mayor o igual
//txt <= txt2   --si txt es menor o igual
//LOGICOS
//
//and(&&) expre1 && expre2  si ambos son verdaderos es verdadero
//or (||) expre1 || expre2 si uno de ellos cumple es verdadero
//not (!) cambia la afirmacion que sale (!expre) solo si sale true o false


// CONDICIONALES

// if
// if (true) { console.log('hola'); }

// if- if-else - else
// if(a){
  // console.log('');
// }
// else if(true){
  // console.log('segundo');
// }

// ARREGLO
// contenedor de varios tipos de datos

// let array = ['banana', 'manzana', 'pera'];
// // mostrando el elemento 1 -- nos ubicamos desde los indices que tienen 
// console.log(array[1]);
//
// // array asociativo (objetos)
//
// let persona = {
//   nombre: 'george', 
//   edad : 21,
//   lenguajes : ['Python', 'C', 'C++', 'Js', 'Php', 'Html+Css', 'Sas', 'Tailwind', 'Lua', 'Perl'],
//   estado: 'universitario - 9'
// };
// // busqueda dentro de un objeto por nombre
// // puedes llamarlos de cualquiera de las 2
// console.log(persona.lenguajes[7]);
// console.log(persona["lenguajes"]);
// // buscando dentro de un objeto dentro de un array por indice
// console.log(persona.lenguajes[7]);
// console.log(persona["estado"]);

// HACIENDO USO DE BUCLES
// break == para el codigo 
// continue == para donde se solicita y salta a la siguiente y continua

// let numero = 0;
// if(numero < 10){
//   numero ++;
//   console.log(numero);
// }

// USANDO WHILE
// ejecutara hasta el numero
// let numero =0;
//
// while(numero <10){
//   numero++;
//   console.log(numero);
// }
//
// // USANDO UN DO WHILE
// // caracteristico porque debe ingresar una vez para que se valide y continue
// let nu = 11;
// console.log("do while")
// do{
//   console.log(nu);
//   nu++;
// }while(nu <10);
//
// // USANDO EL FOR
// // ejecutara hasta uno antes los indicado
// // for (let indexj = 0; indexj < array.length; indexj++) {
// console.log("For");
// for (let indexj = 0; indexj < 10; indexj++) {
//   console.log(indexj);
// }
//
// // USANDO FOR IN
// let animales = ['gato', 'perro','tirano'];
// // aca itera sus indices 
// for (animal in animales){
//   console.log(animal);
// }
// // aca itera por el contenido  
// for (animal of animales){
//   console.log(animal);
// }

// USANDO FOR EACH



// USANDO FUNCIONES 
// function saluda(){
//   respuesta = prompt("hola como estas ");
//   if(respuesta == "bien"){
//     alert("eso es bueno");
//   }else{
//     alert("es una pena")
//   }
// };
//
// saluda();

// HACIENDO USO DE RETURN EN UNA FUNCION
// devuvlve indicando lo que es un valor
// function saludar(){
//   return 'hola';
// }
// let saludo = saludar();
// console.log(saludo);

// usando variables globales
// console.log("retornando una adicion");
// let n1,n2;
// function suma(n1,n2){
//   res =  n1 + n2;
//   return res;
// }
// console.log(saludar(1,2));


// 2da forma de crear una funcion

// let n1,n2;
// const sumar = function(n1,n2){
//   res =  n1 + n2;
//   return res;
// }
//
// console.log(sumar(2,1));

// USANDO LA FUNCION FLECHA
// forma general de funcion flecha
// let n1,n2;
// const saludar = (n1,n2) =>{
//   res = n1 + n2
//   return res;
// }
//
// console.log(saludar(5,1));
// 
// forma compacta
// OJO solo funciona cuando devuelve un solo valor 
// const nombre = nombre => console.log(nombre);
// nombre("george");

// Programacion Orientada a Objetos POO

// al crear un objeto siempre debe de hacerse con const

// class animal {
//   // definiendo parametros
//   constructor(especie, edad, color){
//     // this hace que tenga una caracteristica
//     this.especie = especie;
//     this.edad = edad;
//     this.color = color;
//     this.info = `Soy ${this.especie}, tengo ${this.edad} y soy de color ${this.color}`;
//   }
// // los metodos se crean dentro de la clase OJO: no se puede usar metodos flecha
//   verInfo(){
//     console.log(this.info);
//   }
// }
//
// const perro = new animal('labrador', 23, 'marron' );
// // de esta forma puedes llamar a cualquier clase haciendo uso de la funcion verInfo
// perro.verInfo();
// // metodo normal haciendo la llamada por un punto de uno en uno 
// console.log(perro.info);


// abstraccion = aislar un objeto, el objeto resuma sus caracteristicas principales
// modularidad = separa el problema por partes  
// encapsulamiento = encapsular los datos para que no se tenga acceso desde otros lugares 
// poliformismo = los objetos se comportan distintos con el mismo metodo, solamente porque sus propiedades son distintas


// herencia  = usando extends
// estaticos = usando static
// accesores = usando getters, setter


// HERENCIA 

// class Animal {
//   // definiendo parametros
//   constructor(especie, edad, color){
//     // this hace que tenga una caracteristica
//     this.especie = especie;
//     this.edad = edad;
//     this.color = color;
//     this.info = `Soy ${this.especie}, tengo ${this.edad} y soy de color ${this.color}`;
//   }
// // los metodos se crean dentro de la clase OJO: no se puede usar metodos flecha
//   verInfo(){
//     console.log(this.info);
//   }
//   // con esto hacemos uso del poliformismo
//   // ladrar(){
//   //   if(this.especie === "perro"){
//   //     console.log("Wau");
//   //   }else{
//   //     console.log("No puede ladrar ya que no es un perro");
//   //   }
//   // }
// }
//
//
// class Perro extends Animal{
//   constructor(especie,edad,color,raza){
//     super(especie, edad,color);
//     this.raza = raza;
//   }
//   // aca si se puede crear esot ya que es independiente solo de perro
//   ladrar(){
//     console.log("waw");
//   }
// }
//
// // NO PUEDO TENER UN MISMO OBJETO CON EL  MISMO NOMBRE DE UNA CLASE
// const perro = new Perro("perro", 5, "marron", "doberman");
// const ave = new Animal("picaflor", 1, "azul");
// const gato  = new Animal("angora", 2, "blanco y negro");
//
// perro.verInfo();
// ave.verInfo();
// gato.verInfo();
//


// Metodos Estaticos
//
// class Animal {
//   // definiendo parametros
//   constructor(especie, edad, color){
//     // this hace que tenga una caracteristica
//     this.especie = especie;
//     this.edad = edad;
//     this.color = color;
//     this.info = `Soy ${this.especie}, tengo ${this.edad} y soy de color ${this.color}`;
//   }
// // los metodos se crean dentro de la clase OJO: no se puede usar metodos flecha
//   verInfo(){
//     console.log(this.info);
//   }
//
//   
// }
//
//
// class Perro extends Animal{
//   constructor(especie,edad,color,raza){
//     super(especie, edad,color);
//     this.raza = raza;
//   }
//   // aca si se puede crear esot ya que es independiente solo de perro
//   // al usar el metodo statico lo que hacemos es que hacemos que se ejecute sin la necesidad de llamar a la clase principal 
//   static ladrar(){
//     console.log("waw");
//   }
// }
//
// const ave = new Animal("picaflor", 1, "azul");
// const gato  = new Animal("angora", 2, "blanco y negro");
//
// // llamamos a la clase general pero solo estamos ejecutando static y no el objeto perro ya que sea undefined
// Perro.ladrar();
// ave.verInfo();
// gato.verInfo();
//


// USANDO GETTERS Y SETTERS


// class Animal {
//   // definiendo parametros
//   constructor(especie, edad, color){
//     // this hace que tenga una caracteristica
//     this.especie = especie;
//     this.edad = edad;
//     this.color = color;
//     this.info = `Soy ${this.especie}, tengo ${this.edad} y soy de color ${this.color}`;
//   }
// // los metodos se crean dentro de la clase OJO: no se puede usar metodos flecha
//   verInfo(){
//     console.log(this.info);
//   }
// }
//
//
// class Perro extends Animal{
//   constructor(especie,edad,color,raza){
//     super(especie, edad,color);
//     this.raza = raza;
//   }
//   // aca vamos hacer uso de un setter para modificar la informacion
//   // si aparece error no tengas preocupacion, ya que lo que solicita es que trabajes con typescript 
//   set modificarRaza(newName){
//     this.raza = newName;
//   }
//   // aca vamos a hacer uso de un getter para obtener informacion
//   get getRaza(){
//     return this.raza;
//   }
//
// }
//
// const perro = new Perro("perro", 5, "marron", "doberman");
// const ave = new Animal("picaflor", 1, "azul");
// const gato  = new Animal("angora", 2, "blanco y negro");
//
// // generalmente esto se ve como una propiedad, pero en realidad es un metodo
// // para set
// perro.setRaza = "chiwawa";
// // para get
// //
// console.log(perro.getRaza);
// ave.verInfo();
// gato.verInfo();
//

// USANDO METODOS DE CADENA

// Usando concat();
// let cadena = "cadena";
// // concadenando una cadena 
// resultado = cadena.concat("larga");
//
// console.log(resultado);


// usando startsWith();
// let cadena = "cadena";
// //si la cadena empieza con lo indicado nos devuelve true o false
// resultado = cadena.startsWith("cadena");
// console.log(resultado);


// usando endsWith();

// let cadena = "cadena";
// //si la cadena finaliza con lo indicado nos devuelve true o false
// resultado = cadena.endsWith("cadena");
// console.log(resultado);
//

// usando includes();
// let cadena = "las vacas tienen cadena";
// //si la cadena lo contiene entonces nos devuelve true o false
// resultado = cadena.includes("l");
// console.log(resultado);

// Usando indexOf();
// let cadena = "la serpiente se mueve mucho";
// // nos mostrara el indice donde se encuentra la palabra
// resultado = cadena.indexOf("se");
// console.log(resultado);


// Usando lastIndexOf();
// let cadena = "la serpiente se mueve mucho";
// // ojo tambien elige el primero que encuentra nos indica el indice donde se encuentra la palabra, si no lo encuentra devuelve -1
// resultado = cadena.lastIndexOf("se");
// console.log(resultado);

// Usando padStart()
// Completa la cadena al principio con los caracteres indicados en este "a" hasta que la longitud sea 6
// let cadena = "abc";
// resultado = cadena.padStart(6, "a");
// console.log(resultado);

// Usando padEnd()
// Completa la cadena al final con los caracteres deseados en este caso a hasta que la longitud sea 6
// let cadena = "abc";
// resultado = cadena.padEnd(6, "a");
// console.log(resultado);


// Usando repeat();
// repite la misma cadena cuantas veces le indiquemos
// let cadena = "abc ";
// resultado = cadena.repeat(6);
// console.log(resultado);

// Usando split()
// divide la cadena
// ojo lo vuelve un array
// let saludo = "hola como estas";
// resultado = saludo.split(',');
// console.log(resultado);

// Usando substring();
// extrae lo que le indicamos el inicio y el limite 
// let cadena = "ABCDFG"
// resultado = cadena.substring(0,2);
// console.log(resultado);

// Usando toLowerCase()
// convierte la cadena a minuscula  
// let cadena = "RAMON EL GATO";
// resultado = cadena.toLowerCase();
// console.log(resultado

// Usando toUpperCase()
// convierte la cadena en mayuscula
// let cadena = "el gato es muy grande";
// resultado = cadena.toUpperCase();
// console.log(resultado);

// Usando toString()
// convirtiendo un dato a un array  
// let dato = 50;
// donde 50 se vuelve un string
// let resultado = cadena.toString();
// console.log(resultado);
// Usandolo de mejor manera el toString()
// let cadena = ['pedro', 'matias'];
// // convirtio de un a un string
// let resultado = cadena.toString();
// console.log(resultado);

// Usando trim()
// quitando los espacios en una cadena 
// let cadena = "   david   ";
// console.log("longitud de cadena es : " + cadena.length);
// let resultado = cadena.trim();
// console.log(resultado);
// console.log("longitud de cadena es : "+ resultado.length);

// Usando trimEnd()
// quita solo los espacios en blanco al final de la cadena
// let cadena = "   salmon  ";
// console.log("longitud : "+ cadena.length);
// resultado = cadena.trimEnd();
// console.log(resultado);
// console.log("longitud : "+ resultado.length);

// Usando trimeStart()
// quita solo los espacios en blanco al comienzo de la cadena
// let cadena = "   salmon  ";
// console.log("longitud : "+ cadena.length);
// resultado = cadena.trimStart();
// console.log(resultado);
// console.log("longitud : "+ resultado.length);

// Usando valueOf()
// retorno el valor primitivo de un objeto string
// let cadena = "cadena ancha";
// let resultado = cadena.valueOf();
// console.log(resultado);


// METODOS DE ARRAYS

// Usando pop();
// elimina el ultimo elemento de un array y lo muestra el que elimino
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// resultado = lista.pop();
// console.log(resultado);
// console.log(lista);


// Usando shift();
// elimina el primer elemento de un array y lo muestra el que elimino
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// resultado = lista.shift();
// console.log(resultado);
// console.log(lista);

// Usando push();
// agrega un elemenot al array al final de la lista
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// resultado = lista.push("david");
// console.log(lista);

// Usando reverse();
// invierte el orden de los elementos de un array 
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// resultado = lista.reverse();
// console.log(lista);

// Usando unshift();
// agrega uno o mas elementos al inicio del array, devuelve la nueva longitud del array
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// resultado = lista.unshift("david");
// console.log(lista);


// Usando sort();
// devuelve un arreglo ordenado 
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// resultado = lista.sort();
// console.log(lista);


// Usando splice();
// cambio o agrega elementos designados
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// // splice(reemplaza, elimina, nombre);
// resultado = lista.splice(1,2,"daniel");
// console.log(lista);
//
// let lista = ['ramon', 'sanchez','guillermo', 'andrea'];
// console.log(lista);
// // splice(agrega, elimina, nombre);
// resultado = lista.splice(2,0,"daniel");
// console.log(lista);

// USANDO ACCESORES

// Usando join()
// unde todos los objetos de un matriz o objeto en una cadena y las devuelve
// let contenido = ['abecedario', 'ramon', 'dedo', 'cliche'];
// console.log(contenido);
// let resultado = contenido.join(",");
// console.log(resultado);

// Usando slice() 
// nos muestra las posiciones que le indicamos 
// let contenido = ['abecedario', 'ramon', 'dedo', 'cliche'];
// console.log(contenido);
// let resultado = contenido.slice(1,2);
// console.log(resultado);

// USANDO DE REPETICION
// FILTER: podemos indicar una condicional
// rs = animales.filter(animal =>animales.length > 5); 

//Usando filter
// crea un nuevo array con los elemento que cumplan las condiciones
// let animales = ['raton', 'perro','gato', 'chancho','llama','hamster']; 
// animales.filter(animal => console.log(animal + "\n") );
//
// // Usando forEach ;
// // ejecuta la funcion indicada una vez por cada elemento del array 
// let animals = ['raton', 'perro','gato', 'chancho','llama','hamster']; 
// animals.forEach(animal => console.log(animal + "\n") );

// USANDO EL OBJETO MATH

// METODOS
// USANDO sqrt() - raiz cuadrada 
// numero = Math.sqrt(25);
// console.log(numero);

// Usando cbrt() - raiz cubica
// numero = Math.cbrt(99);
// console.log(numero)

// Usando max() - devuelve el mayor de cero 
// numero = Math.max(4,5,23,54,1,43,65,89);
// console.log(numero);


// Usando min() - devuelve el menor de cero
// numero = Math.min(4,5,23,54,1,43,65,89);
// console.log(numero);

// Usando random() - Devuelve un numero pseudo-aleatorio
// si solo se condidera random () solo se mantiene entre 0 - 1 
// haciendo estos cambios si funciona
// numero = Math.random()*100;
// pero mostrara con decimales
// console.log(numero);

// Usando round() - Devuelve el valor de un numero redondeadomas cercano
// numero = Math.random()*100;
// // con esto le quitamos los decimales, pero no sera preciso ya que siempre eleva el numero 
// datos = Math.round(numero);
// console.log(datos);

// Usando fround() - Devuelve la precision mas simple mas cercana
// let numero = Math.random()*100;
// // // con esto le quitamos los decimales, sera preciso y se queda en el numero, solo ajusta la cantidad
// numero = Math.fround(numero);
// console.log(numero);

// Usando floor() - Devuelve el mayor 
// let numero = Math.random() * 100;
// numero = Math.floor(numero);
// console.log(numero);


// Usando trunc() - devuelve la parte
// numero = Math.max();
// console.log(numero);




// PROPIEDADES
// 
// Usando PI
//
// let numero = Math.PI; 
// console.log(numero);

// usando SQRT1_2
// let numero = Math.SQRT1_2; 
// console.log(numero);

// usando SQRT2
// let numero = Math.SQRT2; 
// console.log(numero);

// usando la E
// let numero = Math.E; 
// console.log(numero);

// usando el LN2 = logaritmo natural de 2
// let numero = Math.LN2; 
// console.log(numesanro);


// usando el LN10
// let numero = Math.LN10;
// console.log(numero);

// usando el log2e
// let numero = Math.LOG2E;
// console.log(numero);

// usando el log10e
// let numero = Math.LOG10E;
// console.log(numero);


// CONSOLA
// Funciones de registro
// Usando assert()
// Aparece un mensaje de error en la consola si la informacion es falsa. Si la afirmacion es verdadera, no aparacera nada (NO ESTANDAR)
// console.assert(5>3);

// Usando clear()
// limpia la consola
// console.clear();

// Usando error()
// muestra un mensaje de error en la consola web
// console.error("Que hiciste");

//Usando info()
// en algunos navegadores se observara que tiene una i cuando se muestra el mensaje 
//mensaje informativo
// console.info("hola como estas");

//Usando log()
// muestra el mensaje en la web 
//mensaje de depuracion
// console.log("hola mundo");

// Usando table()
// esta funcion toma la data que es una array o un objeto y generalmente nos mostrara una tabla
// console.table([1,2,4,4,5,7,6,8]);

// Usando warn()
// Imprime un mensaje de advertencia en la consola web
// console.warn("error");

// Usando dir()
// Despliega una lista interactiva de las propiedades del objeto especificado
// console.dir([3,5,3,8,8,9]);

// Funciones de conteo
// Usando count()  
// console.count() // cuantas veces se esta ejecutando

// Usando countReset()
// console.countReset() // el count se recetea

//funciones de agrupacion 
//
//Usando group()
// console.group() // lo muestra abierto el grupo

//Usando groupEnd()
// console.groupEnd() // finaliza el grupo anterior

//Usando groupCollapse()
// console.groupCollapsed() // muestra oculto el grupo

// funciones de temporizacion
//
// Usando time()
// console.time();// esta contando
// Usando timeEnd()
// console.timeEnd(); // terminara de transcurrir el tiempo 

// Usando timeLog()
// console.timelog(); // indicara todo el tiempo transcurrido

// console.log("%rancio", "color: red; background: black; padding: 20px; border : 3px solid blue");

// DOM

// Nodo = cualquier etiqueta del cuerpo

// Document = es el nodo raiz, a partir del cual se derivan el resto de nodos
// Element = nodos definidos por etiqquetas htmml
// Text = el texto dentro de un nodo elmento se considera un nuevo nodo hijo de tipo text 
// Attribute = los atributos de las etiquetas definen nodos
// Comentarios = los comentarios y otros elementos como las declaraciones doctype enca en cabecera



// document -  METODOS DE SELECCION DE ELEMENTO

// getElementByID();  = seleeciona un elemento por ID 
// getElementsByTagName() = Seleeciona todos los elementos que coincidan con el nombre de la eiqueta especificada
// querySelector() = Devuelve el primer elemento que coindida con el grupo especificando de selectores
// querySelectorAll() = Devuelve todos los elementos que coincidan con el grupo especificado de selectores

//METODOS PARA DEFINIR, OBTENER Y ELIMINAR PARA LOS ATRIBUTOsj  para definir , obtener y elminar volres de atributos
//
// setAttribute()= Modifica el valor del atributo
//
// getAtributo() = Obtiene el valor de un atributo
// removeAttribute() = Remueve el valor de un artributo
//
// ojo en html puedes usar 
// <a class="titulo" tabindex="1">Este es un titulo</a>
//

// ATRIBUTOS DE INPUT
//
//  ojo activa el html para ver como funciona
// 
// className =  nos indica el tipo de la clase que tiene 
// const input = document.querySelector(".input_normal");
// console.log(input.className);
// 
// value = el valor del input
// const input = document.querySelector(".input_normal");
// document.write(input.value);
// type = manupuladno el tipo de dato que se esta usando 
// 
// const input = document.querySelector(".input_normal");
// document.write(input.type = "number");
// 
// accept = para indicar que tipo de archivos se pueden aceptar
// const input = document.querySelector(".input_normal");
// input.accept = "image/png"
// 
// form =  ten en cuenta que un formulario debe de ir con todo el contenido interno, sino llamalo usando el id pero en html
// 
// minlength = el minimo de caracteres que son necesarios, funciona tanto con el id como con class
// const input = document.querySelector(".input_normal");
// input.minLength = '4';
// OJO TAMBIEN PODEMOS USAR
// 
// placeholder = aca podemos escribir lo que necesitemos en vez de usarlo en el html 
// const input = document.querySelector(".input_normal");
// input.placeholder = "hola como estas";

// required = si el dato es requerido, puede funcionar hasta con un espacio
// const input = document.querySelector(".input_normal");
// input.required = " ";

// ATRIBUTO STYLE 
// OJO :  aqui para cambiar las propiedades se usa el CamelCase en vez de los guiones
// const titulo = document.querySelector(".titulo");
// titulo.style.color = "#ff12ca"; 
// titulo.style.backgroundColor = "blue";

// TRABAJANDO CON CLASES, CLASSLIST Y METODOS DE CLASSLIST
//
// TRABAJDNO CON CLASSLIST
// const titulo = document.querySelector(".titulo");
// titulo.classList.add("grande");

// TRABAJANDO CON REMOVE
// quita el elemento seleccionado
// const titulo = document.querySelector(".titulo");
// titulo.remove();

// siquieres quitarle las propiedades asignadas con addclasslist
// const titulo = document.querySelector(".titulo");
// titulo.classList.add("grande");
// titulo.classList.remove("grande");

// TRABAJANDO CON ITEM
// devuelve el valor de la clase recuerda que se cuenta desde 0 - nos devuelve la informacion solicitada
// const titulo = document.querySelector(".titulo");
// let valor = titulo.classList.item(1);
// document.write(valor);


// TRABAJANDO CON CONTAINS
// devuelve true o false si encuntra lo que le indicamos
// const titulo = document.querySelector(".titulo");
// let valor = titulo.classList.contains("oso");
// document.write(valor);


// TRABAJANDO CON TOGGLE
// es algo que nos facilita diciendo que si tiene la clase la quita y si no tiene la clase la agrega, para verlo f12 o inspeccionar
// const titulo = document.querySelector(".titulo");
// let valor = titulo.classList.toggle("oso");
// document.write(valor);


// TRABAJANDO CON REPLACE
// reemplazando la clase con otra cambiando la classe grande x oso
// const titulo = document.querySelector(".titulo");
// let valor = titulo.classList.replace("grande","oso");
// document.write(valor);


// CREANDO ELEMENTOS
//
// TRABAJANDO CON TextContent
// Muestra todo los elementos que se encuentran donde lo estas solictando, tambien lo que estan ocultos
// const titulo = document.querySelector(".titulo");
// let resultado = titulo.textContent;
// document.write(resultado);

// TRABAJANDO CON innerText
// Muestra los elementos visibles a lu usuarios OJO: pero ya no se usa
// const titulo = document.querySelector(".titulo");
// let resultado = titulo.innerText;
// document.write(resultado);


// TRABJANDO CON INNERHTML
// muestra el apartado solicitado solo las etiqueta
// const titulo = document.querySelector(".titulo");
// let resultado = titulo.innerHTML;
// alert(resultado);
// let resultado2 = titulo.outerHTML;
// alert(resultado2);

// CREADORES DE ELEMENTOS
const contenedor  = document.querySelector(".contenedor");
const item  = document.createElement("Li");
const itema = document.createTextNode("este no es un item de la lista");
item.appendChild(itema);
console.log(item);

console.log(item);




