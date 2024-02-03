const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite el numero : ', (numero) =>{
  const num = parseFloat(numero); 
  if(isNaN(num)){
    console.log('El dato ingresado no es un numero');
  }
  else{
    cua = num **2;
    console.log('El cuadrado del numero es ' + cua);
  }

  rl.close();
});

