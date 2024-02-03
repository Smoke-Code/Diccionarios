const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

console.log('CALCULADORA DE NUMERO POSITIVO Y NEGATIVO');
rl.question('Digita un numero negativo o positivo :', (numero)=>{
  let num = parseFloat(numero);
  if(isNaN(num)){
    console.log('El dato ingresado no es un numero ');
  }
  else{
    resultado = (num>0) ? 'es positivo' : 'es negativo';
    console.log('El numero ', resultado);
  }
  rl.close();
});
