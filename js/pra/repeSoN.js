const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let contS = 0;
let contN = 0;
  
function Preguntar(){
  
 rl.question('Digita Si o No : ', (rep) =>{
  if(rep.toLowerCase() === 'si'){
    contS++;
  }    
  else{
    if(rep.toLowerCase() === 'no'){
      contN++;
    } 
    else{
      console.log('la respuesta no es valida');
      Preguntar();
      return;
    }
  }
    
   
    if(contN + contS <=10){
      Preguntar();
    }
    else{
      resultado = (contS>contN) ? 'Tu respuesta final fue SI': 'Tu respuesta final fue NO';
      console.log(resultado);
      rl.close();
    }
    

  });
}

Preguntar();
