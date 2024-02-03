const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite la altura del triangulo : ', (at)=>{
 rl.question('Digte la base del triangulo : ', (bt)=>{
   let alt = parseFloat(at);
   let bat = parseFloat(bt);
   
  if(isNaN(alt) || isNaN(bat)){
    console.log('Los datos ingresados no son numeros');
  }
   else{
     area = (alt * bat)/2;
     console.log('El area del tringualo es ', area);
   }
   rl.close();
 }); 
});
