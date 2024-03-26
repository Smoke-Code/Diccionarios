// DECLARANDO USE STRICT
//

"use strict"

let nombre = "juan"; // variable normal
const edad = 25; // variable de constante

// declaracion de variable de forma estricta

function saludar(){
  let mensaje = "hola";
  return mensaje;
}

console.log(saludar());

// cambiando el contenido de la variable
let mensaje = "hola como estas";
console.log(mensaje);

// comentarios de una linea
/*
 * comentarios de varias lineas
 */

// haciendo una funcion basica
console.log("--funcion basica--");
function sumar(a,b){
  return a+b;
}
console.log(`La suma enviada a la funcion es `,sumar(5,4));

//number
let entero = 2;
let flotante = 22.3;

// string 
let nom = 'George';
let nombe = 'Prado';

// Bolean
let disponible = true;
let descuento = false;
// undefined = valor por defecto de variables no asignadas
// null = para indicar valor desconocido o nulo

// operaciones
// == igualdad 
// === igualdad estricta

// haciendo un array 
console.log('---una lista----')
let lis = ['manzana', 'platanos','naranjas'];
let lectura_lis = lis[0]; 
// agrega un elemento al final
let agregando = lis.push("limon");
console.log(lis);
// elimina un elemento del final
let quitando = lis.pop();
console.log(lis);
// agrega un elemento al inicio
let inicio = lis.unshift('pecana');
console.log(lis);
// elimina pero el primero
let einicio = lis.shift();
console.log(lis);
// devolviendo el indice de un elemento
let indice = lis.indexOf('platanos');
console.log(lis);
console.log(indice);

// recorriendo un array 

let array = [1,2,3];
console.log("---Recorriendo un Array---");
for(let i=0; i< array.length; i++){
  console.log(array[i]);
}

// recorriendo objetos
let obj = {a:1,b:2,c:3};
console.log("---Recorriendo un Objeto---");
for(let key in obj){
  console.log(obj[key]);
}
// object.keys() = devuelve las claves
// object.values() = devuelve los valores
// object.assign() = mergea los objetos

// haciendo un objeto
console.log("---Creando un Objeto---");
let info = {
  nombre: 'gavancho',
  edad: 24,
  esEstudiante : false,
}

console.log(info); // impresion general del objeto
console.log(info.nombre);
console.log(info['edad']);

// imprimiendo el objeto con una funcion
console.log("---Imprimiendo Objeto a traves una Funcion---");
function imprimir(info){
  console.log("Nombre :", info.nombre);
  console.log("Edad : ", info.edad );
  console.log("Estudiante : ", info.esEstudiante);
};

console.log(imprimir(info));

// operadores aritmeticos
// suma +
// resta -
// mul *
// div / 
// mod %

// comparacion de valores, devuleven true o false
// mayor >
// menor <
// mayor igual que >=
// menor igual que <= 
// igual == 
// igualdad estricta ===
// desigualdad estricta !== 

// valores booleanos
// and &&
// or ||
// not !

// intereacciones con el usuario
// funciona cuando trabajas con un index html
// alert("hola una alerta");
// prompt("Escribe algo");
// confirm("Confirma esto");

// usando eventos
// let boton = document.getElementById("mi_boton");
// boton.addEventListener("click", function(){
  // console.log("se hizo click en este boton");
// });

//manipulando el DOOM
// cambiando el tipo
// let edd = prompt("Cual es tu edad : ");
// let nedad = parseInt(edd);
// console.log("Tu edad es : ", nedad);

// manipulando el DOOM
// let parrafo = document.createElement("p");
// parrafo.textContent = "hola mundo";
// document.body.appendChild(parrafo);

// Seleccionando elementos del DOOM
// por ID
// const titulo = document.getElementById('titulo');
// // por etiqueta
// const parrafo = document.getElementsByTagName('p');
// // por clase
// const clase = document.getElementsByClassName('error');
// // pro selector de css
// const cont = document.querySelector('.contenido');

// trabajando con atrbibutos de DOOM
// titulo.textContent = 'Nuevo Titulo';
// const enlace = document.querySelector('a');
// enlace.href = 'nuevo-enlace';
//
// cambiar estilos
/* titulo.style.color = 'red'; */

// anadir clase
// enlace.classList.add('resaltado');
// enlace.classList.remove('resaltado');

// Estructuras de control

console.log("---estructura de control if-else---");
let e = 25;
if(e>=19){
  console.log("Eres mayor");
}else{
  console.log("Eres menor");
}

// operador ternario
console.log("---Operador Ternario---");
let es = 12;
let ternario = (es >=20)? 'disco': 'casa';
console.log(ternario);

// operador nullish coalsecing ??
console.log("---dato predeterminado nulo o indefinido---");
let noe;
console.log(noe ?? 'juan');

//estructura de control while 
console.log("---while---")
let i=0;
while (i<=10){
  console.log(i);
  i++;
}

// estructura de control for
console.log("---for---");
for(i=0;i<=5;i++){
  console.log(i);
}

// estructura de control switch
console.log("---Switch---");
let dia = 'lunes';
switch (dia) {
  case 'lunes':
    console.log("hoy es lunes");
    break;
  case 'martes':
    console.log("hoy es martes");
    break;
  default:
    console.log("no es ninguno de los dias");
    break;
}


console.log("---FUNCIONES---");
console.log("---Funcion Normal---");
// funcion normal 
function saludar(){
  console.log("hola mundo");
}
saludar();

console.log("---Funcion Flecha---");
//fucnion flecha
let salu = () =>{
  console.log('hola');
}
salu();

console.log("---FUNCIONES ESPECIALES---");
//functiones autoejecutadas
console.log("---Funciones Autoejecutadas---");
(function(){
  console.log("adios");
})();

// funciones predeterminadas
console.log("---Funciones con datos predeterminados---");
function salud(nome = "juan"){
  console.log("hola ", nome + "!");
}

salud('ramon');
salud();

//function con cierre de ambito 
console.log("---Funcion cierre de ambito---");
function hla(man){
  let mens = "hola " + man + " !";
  return function(){
    console.log(mens);
  };
}

let sal = hla("david");

console.log("---Trabajando con Promesas---");
function obtenerDatos(){
  return new Promise((resolve, reject) => {
    setTimeout(()=>{
      const datos = "Estos son los datos del servidor";
      resolve(datos);
    }, 2000); // tiempo de retraso
  })
}

console.log("iniciando la obtencion de datos del servidor .....");
obtenerDatos()
  .then((datos) =>{
    console.log("Los datos del servidor son : " + datos);
  })
  .catch((error) => {
    console.log("Ocurrio un error en la comunicacion con el servidor ..." + error);
  })


