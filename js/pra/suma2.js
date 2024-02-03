const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite el primer numero : ', (n1) =>{
  rl.question('Digite el segundo numero : ', (n2)=>{
    let no1 = parseFloat(n1);
    let no2 = parseFloat(n2);

    if(isNaN(no1) || isNaN(no2)){
      console.log('Ambos numeros no fueron ingresados correctamente ');
    }
    else{
      sum = no1 + no2;
      console.log('La suma de los dos numeros es ' + sum);
    }
    rl.close();
       
  });
});
