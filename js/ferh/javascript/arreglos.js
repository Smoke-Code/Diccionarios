// cada vez que una varible indique [] es un arreglo

let juegos = ['mario', 'megaman', 'chrono'];

// llamando arreglos

console.log(juegos[1]);

// asignando un contenedor 

const arr = new Array(20);
console.log(arr);
// definiendo un arreglo vacio 

const arre = [];
console.log(arre);

// recuerda que puedes almacenar cualquier cosa dentro de un arreglo
let peliculas = ['feria siniestra', 'aro', 'llorona', '100 dias despues'];
console.log({peliculas});


let arreglo = [
  true,
  123,
  'david',
  1 +2,
  function(){},
  ()=>{},
  {a:1},
  ['elis', 'rochell', 'nick','coach'],
]
// accediendo de un arreglo dentro de un arreglo
console.log(arreglo[7][3]);

// tamano de un arreglo
let jue = ['rakion', 'lol', 'dota', 'pubg', 'bloodstrike', 'call of duty', 'mobile'];
console.log(jue.length);

// primer elemento
let primero = jue[0];
// sin tener conocimiento de la longitud del arreglo
let ultimo = jue[juegos.length -1];

console.log({primero, ultimo});

jue.forEach((elemento, indice, arr)=> {
  console.log({elemento,indice, arr});
});

// anadiendo al final
let nuevaLongitud = jue.push('crisis');
console.log(nuevaLongitud,jue);
// anadiendo al principio
let nuevaLongitu = jue.unshift('warzone');
console.log(nuevaLongitu, jue);
// borrando el ultimo
let borrandou = jue.pop();
console.log(borrandou,jue);
// borrando desde indices
let pos = 1
// primero en splice(posicion, cuantos se borraran)
let borrandoi = jue.splice(pos,1);
console.log(borrandoi,jue);









