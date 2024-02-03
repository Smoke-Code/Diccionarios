let array = ['aa', 'bb', 3, [1,2], {nombre: 'nombre', apellido: 'Apellido'}];

let i0 = array[0];
let i1 = array[1];
let ind = 4;
let intem = array[ind].nombre; // accediendo al item4 del array y buscando el nombre

let obj = {
  nombre: 'martin',
  apellido: 'cristobal',
  edad: 26,
  coches: ['ferrari', 'Lamborgini'], 
  direccion: {
    calle: 'texto de la calle ',
    numero: 4,
  }
}

let nom = obj.nombre;
let cal = obj.direccion.calle; // accediendo al objeto direccion y buscando la calle 
let coch = obj.coches[2]; // accediendo al objeto de coches y usando el elemento 2 de la lista 


