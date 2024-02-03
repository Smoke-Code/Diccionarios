const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite el radio : ', (radio) =>{
  let rd = parseFloat(radio);
  if(isNaN(rd)){
    console.log('el dato ingresado no es un numero ');   
  }
  else{
    let pi = 3.1416;
    area = pi * rd **2;
    console.log('El area del circulo es ' + area);
  }
  
  rl.close();
});
