// cuando trabajas con estas llaves {} es indicativo que es un objeto literal

let personaje = {
  nombre: 'david',
  codeName: 'programador', 
  vivo: true,
  edad: 22,
  coords:{
    lat: 954.5,
    lng: -234.4,
  },
  lenguajes: ['c', 'python','html,css','js', 'sql', 'lua','perl','rust','java','C++','assembler','bash'], 
};

console.log(personaje);
console.log("nombre", personaje.nombre);
console.log('nombre', personaje['nombre']);
console.log('edad', personaje['edad']);
// objeto dentro de un objeto
console.log('cor', personaje.coords);
console.log('lat', personaje.coords.lat);

console.log('cantidad de lenguajes', personaje.lenguajes.length);
console.log('ultimo lenguaje : ', personaje.lenguajes[personaje.lenguajes.length-1]);

const x = 'vivo';
// buscando algo en el objeto
console.log('vivo', personaje[x]);

// borrando un dato de un objeto

delete personaje.edad;
console.log(personaje);

personaje.casado = true;

// para saber cuales son las variables del objeto
const entriesPares = Object.entries(personaje);
console.log(entriesPares);


