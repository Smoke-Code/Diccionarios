const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

console.log('CALCULADORA DE MULTIPLO')
rl.question('Digita el numero : ', (numero)=>{
  rl.question('Digita el multiplo : ',(numero2)=>{
    
    let num = parseFloat(numero); 
    let nume = parseFloat(numero2);
    
    if(isNaN(num) || isNaN(nume)){
    
      console.log('El dato ingresado no es un numero');
    }
    else{
      resultado = (num % nume === 0) ? 'si es multiplo ' : 'no es un multiplo' ; 
      console.log("El numero ", resultado);
    }
  rl.close();
  });
});
