const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite el grado de celsius :', (gra) =>{
  let grado = parseInt(gra);
  if(isNaN(grado)){
    console.log('El dato ingresado no es un numero : ');   
  }
  else{
    
    fahrenheit = ((grado * 9)/5) + 32;
    
    console.log('la conversion de los grados celsius a fahrenheit es ', fahrenheit);
  }
  
  rl.close();
   
});
