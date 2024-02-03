const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite un numero : ', (num)=>{
  let num1 = parseInt(num);
  
  if(isNaN(num1)){
    console.log('El dato ingresado no es un numero ');
  }
  else{
    if(num1 % 2 === 0){
      console.log('El numero es par' );
    }
    else{
      console.log('El numero es impar');
    }
  }
  rl.close();
});
