console.log(27);
// este es un comentario

/*
 * comentario de varias lineas
 */

// numero -- number
console.log(27);
console.log(27.16);

// texto --string

console.log("Victor Raul");
console.log("hola mundo");

// booleanos
//
console.log(true);
console.log(false);

// indefinido -- undefined

console.log(undefined);

// null

console.log(null);

// tipos de datos estructurales

// objeto - object

console.log({
  nombre: "George",
  edad: 21,
  fechaNacimiento: null,
  esAlto: true,
  ciudades: ["santiago", "wanchaq", "lima"],
  direccion: { callePrincipal: "los leones" },
});

// tipos de datos de tipo lista -- array

["Peru", "Mexico", "Venezuela", "Ecuador"];

[21, true, { nombre: "george" }, [1, 2, 3, 4, 5]];

// operadores

// operadores de asignacion
let x = 2;
let ya = true;

// operador de asignacion de adiccion (+=)
// incremento
let w = 2;
let ye = 1;
w += ye; // w = w + ye
console.log(w);

// operador de asignacion de resta (-=)
// decremento
let z = 1;
var yi = 2;
z -= yi; // z = z -yi
console.log(z);

// operador de multiplicacion (*=)

let x1 = 2;
let x2 = 3;

x1 *= x2; // x1 = x1 * x2
console.log(x1);

// operador de division (/=)

let y1 = 1;
let y2 = 2;

y1 /= y2;
console.log(y1);

// operador de residuo (%=)

let r1 = 1;
let r2 = 2;

r1 %= r2; //r1 = r1 % r2
console.log(r1);

// operador de exponenciacion (**=)

let e1 = 3;
let e2 = 2;

e1 **= e2; // e1 = e1 ** e2
console.log(e1);

// operadores de comparacion (==)

console.log(3 == 3);
console.log(3 == "3");

// operadores de desigualdad (!=)

console.log(3 != 3);

// operadores de estricta comparacion (===)

console.log(3 === 3);
console.log(3 !== "3");

// operadores de estricta desigualdad (!==)

console.log(3 !== "3");
console.log(3 != "3");

// operadores >, >=, <, <=

console.log(3 > 4);
console.log(3 >= 3);
console.log(2 < 4);
console.log(2 <= 2);

// operadores aritmeticos

console.log(2 + 2);
console.log(2 - 2);
console.log(2 * 2);
console.log(2 / 2);
console.log(2 % 2);
console.log(2 ** 2);

// oparadores de incremento (++)

let numero = 0;
// antes
console.log(++numero);
// despues
console.log(numero++);

// operador de decremento (--)

let numero1 = 3;
// antes
console.log(--numero);
// despues
console.log(numero--);

// operadores logicos

// AND
console.log(true && true);
console.log(2 > 3 && 1 <= 2);

// OR
console.log(true || false);
console.log(false || false);

// NOT

console.log(!true);
console.log(!false);

// operador de cadena o concatenacion ( + )
let nombres = "george";
let apellidos = "prado";
let nombreCompleto = nombres + " " + apellidos;
console.log(nombreCompleto);

// operador ternario (condicion ? val1 : val2)
console.log(2 > 3 ? "Es mayor " : "Es menor");

// Operador de destructuracion

let persona = {
  nombre: "george",
  apellido: "david",
};

let { nombre: xyz, apellido } = persona;

console.log(xyz);
console.log(apellido);
console.log(persona);

//destructuracion de un arreglos

var arreglo = [1, 2, 3, 4, 5];

var [primeraPosicion, dos] = arreglo;
console.log(primeraPosicion);
console.log(dos);

// operador de miembro o acceso de propiedad
//
// Notacion punto
var perso = {
  nomb: "victor",
  apelli: "raul",
};

console.log(perso.nomb);
console.log(perso.apelli);

// notacion por corchetes

var person = {
  name: "george",
  first_name: "david",
};

console.log(person["name"]);

//notacion por corchetes en arreglos

var arreglo = [21, 22, 23, 24, 25, 26];

// estructura if
// if (condicion){}

let llueve = true;
if (llueve) {
  console.log("Necestio una sombrilla");
}

let administrador = "administradora";
if (administrador === "administrador") {
  console.log("bienvenido al sistema ");
}

// if(condicion){}else{}
const Mayoria_Edad = 18;
let edad = 12;

if (edad >= Mayoria_Edad) {
  console.log("Es mayor de edad ");
} else {
  console.log("Es menor de edad");
}

// if(condicion){}else if(condicion){}else{}

let semaforo = "rojo";
if (semaforo === "verde") {
  console.log("Arranca");
} else if (semaforo === "amarillo") {
  console.log("Listo?");
} else if (semaforo === "rojo") {
  console.log("Motores apagados ");
} else {
  console.log("Color no Identificado");
}

/* switch () {
  case value:

    break;

  default:
    break;
}
*/
let producto = " ";
switch (producto) {
  case "papaya":
    console.log("Las papayas cuestan $1 dolar cada una");
    break;
  case "naranjas":
    console.log("Las naranjas cuestan $2 dolares el kilo");
    break;
  case "mango":
    console.log("el mango cuesta $3 dolares el kilo");
    break;
  default:
    console.log("no disponemos de ese producto");
    break;
}

/*while (condition) {}*/

let contador = 0;
while (contador <= 5) {
  console.log("hola mundo");
  contador += 1;
}

// do{}while (condicion);

let cont = 1;
do {
  console.log("como estaas");
  cont += 1;
} while (cont <= 10);

// for (let index = 0; index < array.length; index++) {
// const element = array[index];}

for (let contador = 0; contador <= 5; contador++) {
  console.log("Hola Mundo");
}

// for--in
// for(variable operadorIN objeto)
// iterable un objeto
let contenido = {
  nombre: "george",
  apellido: "prado",
  edad: 27,
};

for (let clave in contenido) {
  console.log(clave, contenido[clave]);
}

// for -- of
// objetos iterables
let arregl = [1, 2, 3, 4, 5];
for (let valor of arregl) {
  console.log(valor);
}

//funciones
/*function nombre_funcion(){
  cuerpo de nuestra funcion
}*/

function saludar() {
  console.log("Hola soy George");
}

saludar();

function salu(aqui) {
  // funciona usando las comillas de corte
  console.log(`hola soy ${aqui}`);
}

salu("david");

function hola(llama) {
  return `hola soy ${llama}`;
}

let hol = hola("david");
console.log(hol);
console.log(hola("george david"));

// expresion o funciones anonimas

let suma = function (a, b) {
  return a + b;
};

console.log(suma(2, 2));

//funcion flecha

// aspectos complejos
let resta = (a, b) => {
  return a - b;
};

console.log(resta(5, 2));

// aspectos sencillos

let mult = (a, b) => a * b;

console.log(mult(4, 3));

// manuplacion de arreglos

// For Each
// recorrer los elementos de un arreglo
let letras = ["a", "b", "c", "d"];
console.log(letras.length);

/*for(let i=0; i<letras.length; i++){
  const element = letras[i];
  console.log(element);
}*/

letras.forEach((element) => {
  console.log(element);
});
// otra forma
letras.forEach((elemento) => console.log(elemento));

// push--shift--pop

let letr = ["a", "b", "c", "d"];
letr.push("f");
console.log(letr);
letr.shift(); // primer elemento
console.log(letr);
letr.pop(); // ultimo elemento
console.log(letr);

//map

let estu = ["Daniel", "Yesica", "Anderson", "Katrina"];
let asis = estu.map((nombre) => {
  return {
    nombre: nombre,
    asistencia: false,
  };
});

console.log(estu);
console.log(asis);
console.log(estu);

let productos = [
  { nombre: "camisetas", precio: 15 },
  { nombre: "zapatillas", precio: 20 },
  { nombre: "pantalon", precio: 35 },
];

// map hace recorrido en producto
/*let productoImpuestos = productos.map((producto) => {
  producto.impuesto = .12;
  return producto;
});
*/

let productoImpuestos = productos.map((producto) => {
  return {
    ...producto,
    impuesto: .12,
  };
});

console.log(productos);
console.log(productoImpuestos);

// filter

let estudi = [
  { nombre: "ada", edad: 20, matricula: true },
  { nombre: "jair", edad: 21, matricula: false },
  { nombre: "anderson", edad: 18, matricula: true },
  { nombre: "yesica", edad: 19, matricula: false },
  { nombre: "david", edad: 22, matricula: true },
  { nombre: "anderson", edad: 25, matricula: false },
  { nombre: "camila", edad: 23, matricula: false },
  { nombre: "yeikod", edad: 18, matricula: true },
  { nombre: "max", edad: 28, matricula: false },
];

// let filtrado = estudi.filter((estudian) => estudian.edad>=21);
let filtrado = estudi.filter((estudian) =>
  estudian.edad >= 21 && estudian.matricula
);
console.log(estudi);
console.log(filtrado);

// reduce
// reduce el array a un solo elemento
let calificaciones = [13, 15, 19, 20, 20];
// donde se almacena //recorre    // hace lo operacion    // estado inicial
let sum = calificaciones.reduce(
  (acumulador, calificacion) => acumulador + calificacion,
  0,
);
console.log(calificaciones);
console.log(sum);
console.log(sum / calificaciones.length);

let edades = [21, 22, 23, 44, 18, 23, 44, 8, 21, 43, 21];
/* salida
 * la cantidad de personas que tienes esa edad
{
  21:3,
  43:2,
}*/

let resulta = edades.reduce((acumulador, edad) => {
  if (!acumulador[edad]) {
    acumulador[edad] = 1;
  } else {
    acumulador[edad] += 1;
  }
  return acumulador;
}, {/*aqui hay un objeto vacio*/});

console.log(edades);
console.log(resulta);

let ventas = [
  { nombre: "camiseta", precio: 15, totalVendido: 10 },
  { nombre: "zapato", precio: 25, totalVendido: 15 },
  { nombre: "medias", precio: 35, totalVendido: 25 },
];

let resultado = ventas.reduce((acumula, pro) => {
  let totalVen = pro.precio * pro.totalVendido;
  acumula[pro.nombre] = totalVen;
  return acumula;
}, {});

console.log(ventas);
console.log(resultado);

let escolares = [
  { nombre: "ada", edad: 20, matricula: true },
  { nombre: "katrina", edad: 19, matricula: false },
  { nombre: "katrina", edad: 20, matricula: true },
  { nombre: "jorge", edad: 23, matricula: false },
  { nombre: "david", edad: 18, matricula: true },
  { nombre: "raul", edad: 25, matricula: false },
];

let re = escolares
  .map((escolar) => escolar.matricula)
  .reduce((acu, item) => {
    if (item) {
      acu.matricula += 1;
    } else {
      acu.noMatriculado += 1;
    }
    return acu;
  }, { matricula: 0, noMatriculado: 0 });

console.log(escolares);
console.log(re);

// some -- every
// some : verificara si por lo menos 1 de los elementos cumple con los requerimientos
// every : retorna si todos los elementos cumplen
// SOME
let nu = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let r = nu.some((num) => num % 2 === 0);
console.log(r);
// EVERY
let nud = [1, 2, 3, 4, 5, 6, 7, 8, 9];
let sa = nud.every((nums) => nums % 2 === 0);
console.log(sa);

// find -- findIndex
// find : encarga de buscar un elemento   que cumpla con la considicon y la va a retornar
// findIndex :  en base a una condicion, nos devolvera la posicion en el array

let clientes = [
  { id: 1, nombre: "david" },
  { id: 2, nombre: "george" },
  { id: 3, nombre: "anderson" },
  { id: 4, nombre: "mr robot" },
  { id: 5, nombre: "whoami" },
  { id: 6, nombre: "mrx" },
];
// devuelve un unico elemento
let cliente = clientes.find((cliente) => cliente.id === 1);
console.log(cliente);
console.log(clientes);

// findIndex
let cli = [
  { id: 1, nombre: "Ada" },
  { id: 2, nombre: "Katrina" },
  { id: 3, nombre: "Pamela" },
  { id: 4, nombre: "Michelli" },
];

let posicion = cli.findIndex((clien) => clien.id === 2);
console.log(posicion);

//includes

let mascotas = ["perro", "gato", "conejo"];
let sal = mascotas.includes("gato");
console.log(sal);

// Join

let l = ["aire", "fuego", "agua"];
// puede o no recibir parametros
let rl = l.join(" , "); // haciendo la separacion por " , "
console.log(rl);

let dt = [
  { id: 1, nome: "codigo" },
  { id: 2, nome: "elemental" },
  { id: 3, nome: "basico" },
  { id: 4, nome: "consecutivo" },
  { id: 5, nome: "grande" },
  { id: 6, nome: "corto" },
];

let csvGenerator = (array, separator = ",") => {
  let dtt = array.map((elemmt) => Object.values(elemmt).join(separator));
  dtt.forEach((elemmt) => console.log(elemmt));
};

csvGenerator(dt);

// los valores que se les asigno : grande
// console.log(Object.values({id: 5, nombre: 'grande'}));
// le muestra donde se almacen los valores : id
// console.log(Object.keys({id: 5, nombre: 'grande'}));

// concat -- sort -- splice -- slice

// concat: el metodo se utiliza para fusionar dos arrays

let a1 = ["a", "b"];
let a2 = ["c", "d"];
let a3 = a1.concat(a2);
// tambien podemos hacer uso de la siguiente manera
let a4 = [...a1, ...a2];
console.log(a3);
console.log(a4);

// sort: este metodo ordena los elementos de un array en su lugar y devuelve el array
let ay = [1, 30, 5, 10, 21];
// ordena de acuerdo al codigo ASCII
console.log(ay.sort());
// podemos ordenar de la siguiente manera, ordena de manera adecuada
let orden = ay.sort((a, b) => a - b);
console.log(orden);
// splice : Este metodo cambia el contenido de un array elminando,reemplazando o anadiendo alimentos

let a = ["a", "b", "c", "d"];
// elimina desde la posicion que le indiques
let remove = a.splice(1, 2);
// agrega o cambia la informacion
let cambiando = a.splice(1, 1, "s");
console.log(remove);

// slice : devuelve una copia superficial de un array en un nuevo array

let ar = ["a", "b", "c", "d"];
let seccion = ar.slice(2, 4);
console.log(seccion);

//TRABAJANDO CON ASINCRONISMO

console.log("Tarea 1");
console.log("Tarea 2");
console.log("Tarea 3");
setTimeout(() => {
  console.log("Tarea 4");
}, 2000);
console.log("Tarea 5");

// ASINCRONISMO CON CALLBACKS
// una funcion anonima
const si = (a, b) => {
  return a + b;
};

let rp = si(1, 2);
console.log(rp);

// funcion usando callbacks
const so = (a, b) => {
  return a + b;
};

// ahora usando un callback
// cb = callback
const ok = (a, b, cb) => {
  cb(a + b);
};

ok(1, 2, (res) => {
  console.log(res);
});

// otra forma de usar el callback
const com = (a, b, bc) => bc(a + b);
const im = (data) => console.log(data);
com(1, 2, im);

// traendo datos
// se hacia antes el asincronismo
const getData = (cbl) => {
  setTimeout(() => {
    cbl({
      nombre: "Geovany",
      apellido: "Ancon",
    });
  }, 3000);
};

const imp = (data) => console.log(data);
getData(imp);

// promises then -- catch
// bases para una promesa 

let prome = new Promise((resolver, rechazar )=>{
  let condicion = false;
  if(condicion){
    resolver('promesa cumplida');
  }
  else{
    rechazar('promesa rechazada');
  }
});

prome.then(mensaje => {
  console.log(mensaje);
}).catch(mensaje => {
    console.log(mensaje);
  });


// trabajando con una promesa

function numeroAleatorio(){
  return new Promise((resolve, err) => {
    setTimeout(() => {
      resolve(Math.random());
    }, 1000);
  });
}

numeroAleatorio().then(numeroa =>{
  console.log('el numero es ', numeroa);
  throw new Error('ha ocurrido un error');
}).then(result => {
    console.log('Resultado : ', result);
  }).catch(err => {
    console.log('Se produjo un error : ', err.message);
  })

// usando Async 
// la palabra clave Async antes de una funcion retorne una promesa 
async function miFunction(){
  return 'hola';
}

// usando await
// la palabra await solo se puede ser usada dentro de una funcion asyncrona 

// let valor = await promesa;

async function obtenerDatos(){
  try{
    let rspt = await fetch('https://api.misitio.com/datos');
    let datos = await rspt.json();
    console.log(datos);
  }catch(error){
    console.log('Hubo un problema con la peticion fetch : ' + error.message);
  } 
}

obtenerDatos();


