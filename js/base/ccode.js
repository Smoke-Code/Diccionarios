// usando los controles de flujo
// IF - ELSE

if(condicion){
  // hago esto si cumplo con el codigo 
  console.log('estoy en el if');
} else{
 // hago esto si no se cumple el codigo  
  console.log('estoy en el else');
  
}

//IF - ELSE IF - ELSE IF - ELSE

if(condicion){
  // entro aqui si cumplo la primera condicion  
}else if(){
 // entro aqui si cumplo la segunda 
}else if(){
  // entro aqui si cumplo la tercera 
}else{
 // entro aqui si no cumplo ninguna  
}


// if(){ else if(){else{}}}

if(){
  if(){
    // hago aqui algo  
  }else{
    // paso aqui si no hago lo anterior  
  }
} else{
  // paso aqui si no cumplo con lo de arriba  
}



//Switch(){case 0: break; case 1: break default; break;}

switch (condicion) {
  case 0:
    // hago a
    break;
  case 1: 
    // hago b
    break;
  case 2: 
    // hago c
    break;

  default:
    //hago d
    break;
}

//BUCLES
// WHILE
//
let contador= 0;
let n = 50;
while (contador < N) {
 // seguira hasta que sea menor a 50
 console.log(contador);
 contador +=1;
}
while (condition) {   // sino conoces el numero exacto de vueltas usa el while 
  
}



//DO WHILE
do {
  
 // primero ejecutara y luego comprobara  
  
} while ( );
do {
  
} while (condition);

// FOR 

for (let i=0; i<10; ++1){ // numero exacto de vueltas usa for 
  console.log(i); 
}



//FOR ESPECUALES

var array = [10,20,30];
for (let i=0; i < array.length; ++1){ // numero exacto de vueltas usa for 
  console.log(array[i]);
}

var array = [10,20,30];

var estudiantes = [
  {
    nombre: 'estudiante 1 ',
    nota: 4,
  }
  {
    nombre: 'estudiante 2 ',
    nota: 8,
  }
  {
    nombre: 'estudiante 3 ',
    nota: i, 
  }
]

for(let i=0; i < estudiantes.length; i++){
  console.log(estudiantes[i].nombre, estudiantes[i].nota);
}

// lo mismo de lo aterior pero mas minimizado
for(let estudiante of estudiantes ){
  console.log(estudiante[i].nombre, estudiantes[i].nota); 
 
}

let etudiant={
  nombre: 'javier guzman',
  nota: 5, 
  
}

for (let key in estudiant){
 console.log(key); // ojo solo te mostrara las variables que hay  
}













