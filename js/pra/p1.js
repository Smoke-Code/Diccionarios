const readline = require('readline');

const rl  = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digita tu nombre : ', (nombre) => {
  console.log('Hola , '+nombre +' Bienvenido, Como estas');
  rl.close();
});
