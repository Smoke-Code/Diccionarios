// DECLARANDO "USE STRICT"
// al usar use strict nos ayuda a identificar errores, como variables no declarada
// 
// HACIENDO UN USO DE USE STRICT 

"use strict"
// declaracion de variables 
let nombre = "juan";
const edad = 25;

// declaracion de la funcion en modo estricto
function saludar(){
  let mensaje = "hola !";
  return mensaje;
}
// uso de la funcion en modo estricto
console.log(saludar());

// uso de variable no declarada
mensaje = "Hola como estas";
console.log(mensaje);




// comentarios de  una linea 

/*
 * comentarios de varias lineas
 */

// tener en cuenta que var ya no se usa por contener algunos problemas 

let name = "george";
let age = 22;
const pi = 3.14;

function sumar (a,b){
 return a + b; 
}

// imprimiendo en consola 

console.log(5,10);

//usando una variables string
console.log("hola", + nombre + " !");
//usando una variables edad int
console.log("Tu edad es ", + edad);
//usando una variables edad float
console.log("El valor de pi es ", + pi);


// VARIABLES QUE SE ESTAN HACIENDO USO  
// number
let cantidad = 2;
let precio = 29.99;

// string
let nom = 'Maria';
let apellido = "Gomez";

// Bolean
let disponible  = true;
let descuento  = false;
// Undefined -> valor por defecto para variables no asignadas 
// Null -> para indicar valor desconocido o nulo 

// Variables en la misma linea 
let ed = 30, nomb = 'david', casado = false;
// reasignando variables
nomb = 'raul';
//
//OPERADORES DE COMPARACION
//igualdad 
// == 
console.log(5 == "5"); // true -> ya que son iguales
// igualdad estricta 
// === 
console.log(5 ===  "5"); // false -> ya que los tipos de datos no coinciden

// HACIENDO UN ARRAY 
let lista_compras = ["Manzanas", "Platanos", "Naranjas"];
let lista = lista_compras[0];
//push() agrega un elemento al final 
//pop() elimina el ultimo al final
//unshift() anade al inicio
//shift() elimina el primero 
//indexOf() devuelve el indice de un elemento

// Recorriendo Arrays
let array = [1,2,3];
for(let i =0; i< array.length; i++){
  console.log(array[i]);
}

// Recorrer  obejtos

let obj = {a: 1, b:2, c:3};
for(let key in obj ){
  console.log(obj[key]);
}

//HACIENDO UN OBJETO
let informacion_personal = {
  nombre : "george", 
  edad : 25,
  esEstudiante : true,
};

// se accede tanto por 
informacion_personal.nombre;
persona['edad'];

// object.keys()  -> devuelve las claves
// object.values()  -> devuelve los valores
// object.assign()  -> mergea los objetos 


// uso de variables de diferentes tipos de datos
console.log(nombre);
console.log(edad);

// uso de funcion para manipular variables de diferentes tipos de datos 

function imprimirDetalles(persona){
  console.log("Nombre : ", persona.nombre);
  console.log("Edad : ", edad.nombre);
  console.log("Es esEstudiante : ", persona.esEstudiante);
  
}

imprimirDetalles(informacion_personal);

// OPERADORES ARITMETICOS
//
let suma = 10 + 5;
let resta = 10 - 5;
let mul = 5 * 1;
let div = 10/5;
let mod = 10 % 2;

// COMPARANDO VALORES, DEVUELVEN TRUE O FALSE

let mayorq = 10 > 5;
let menorigual = 10 <= 15;
let igual = 10 === 10;
let distinto = 10 !== 5;

// VALORES BOLLEANOS 

let and = (10>5) && (3===3);
let or = (10 > 5) || (3 === 4);
let not = !(10 > 5);

// INTERACCION CON EL USUARIO 
//
alert("hola mundo");
let nombr = prompt("Cual es tu nombre : ");
let confirmacion = confirm("Estas seguro de que deseas continuar : ");

// Eventos 

let boton = document.getElementById("miBoton");
boton.addEventListener("click", function(){
  consle.log("se hizo click es este boton");
  
});

// conversiones de tipos

let edd = prompt ("Cual es tu edad ? : ");
let edadNumero = parseInt(edd);
console.log("Tu edad es : " + edadNumero);

// manipulando el DOOM

let parrafo = document.createElement("p"); // crea un elemento de parrafo 
parrafo.textContent = "hola mundo"; // esteblece el contenido del parrafo
document.body.appendChild(parrafo); // Agrega el parrafo al final del cuerpo de la pagina 

// seleccionando elementos de DOOM
// por ID
const titulo = document.getElementById('titulo');
// por etiqueta
const parrafos = document.getElementsByTagName('p');
// por clase
const errores = document.getElementsByClassName('error');

// por selector de css
const contenido = document.querySelector('.contenido');

// manipulando el DOOM
// trabajando con atributos
titulo.textContent = 'Nuevo Titulo';
const enlace = document.querySelector('a');
enlace.href = 'nuevo-enlace';

//cambiar estilos
titulo.style.color = 'red';

// anadir y eliminar clases 
enlace.classList.add('resaltado');
enlace.classList.remove('resaltado');





// Estructura de control if else 

let e = 25;
if(e >= 18){
  console.log("Eres mayor de edad ");
  
}else{
  console.log("Eres menor de edad ");
}

// operador ternario

let resultado = (edad >= 18) ? "Eres menor de edad":"Eres menor de edad";
console.log(resultado);

// operador nullish coalescing ?? 
let noe; // se le proporcionara un valor predeterminado en caso que la variable sea nula o indefinida
console.log(noe ?? "juan");

// Estructura de control while 
let i = 0;

while (i < 10) {
  console.log(i);
  i++;
}

for(let j=0; j<10;j++){
  console.log(j);
}

// Estructura de control switch 
let dia = "lunes";
switch (dia) {
  case "lunes":
    console.log("Hoy es lunes"); 
    break;
  case "martes":
    console.log("Hoy es martes");
  default:
    console.log("Hoy no es ni lunes, ni martes ");
    break;
}

// Trabajando con FUNCIONES

// declaracion de funciones
function saludar(){
  console.log("HOla a todos");
}

// Expresiones de funciones 
let saludar = function(){
  console.log("Hola a todos");
}

// Funciones Flecha 
let saludar = () =>{
  console.log("Hola a todos");
}

// FUNCIONES DE ESPECIALES DE JAVASCRIPT
// Funciones Autoejecutadas
(function(){
  console.log("hola");
  
})();

// funciones con parametros predeterminados 
function salud(nome = "juan"){
  console.log("hola", + nome + "!");
}

salud("manuel");
salud();

// Las funciones con cierre de ambito 
function hla(nam){
  let mensaje = "hola, "+ nam + "!";
  return function(){
    console.log(mensaje);
  };
}

let saludardavid = saludar("david");
let saludarkim = saludar("kim");

saludardavid();
saludarkim();


// TRABAJANDO CON PROMESAS
// gesionar tareas que toman tiempo, como solicitudes para los servidores,sin bloquear la ejecucion de otras tareas 

function obternerDatosS(){
  return new Promise((resolve, reject) => {
    setTimeout(() =>{
      const datos = "Estos son los datos del servidor ";
      resolve(datos);
    }, 2000);
  });
}

console.log("iniciando la obtencion de datos del servidor ....");
obternerDatosS()
  .then((datos) => {
    console.log("Los datos del servidor son : " + datos);
  })
  .catch((error) => {
    console.log("Ocurrio un error al obtener los datos del servidor ", + error);
  });















