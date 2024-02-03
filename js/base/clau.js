const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Cuantas iteraciones quieres hacer ? : ', function(iteraciones){
  for(let i = 0; i < iteraciones; ++i){
    console.log(i);
  }
  rl.close()
});

