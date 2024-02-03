// formas de logica 
function proceso(){
  console.log('hago una cosa');
  console.log('luego hago otra');
}

proceso(); // formas de llamar 


function generar(nombre, apellido) {
  console.log(nombre + ' ' + apellido); 
  //if (nombre === 'martin') {
    
  // }else{
  // 
  // } 
}


generar('goerge', 'prado');

// puede devolver valores 

function calcular(n1,n2) {
  return (n1 + n2)/2;
  
}

let nu1 = 2;
let nu2 = 4;
let fin = calcular(nu1, nu2);
console.log('la media de' + nu1 + ' y ' + nu2 + ' es ' +  fin);




// typo dato y podemos usarlo como variable

//let logica = function(nombre) {console.log('hola mi nombre es ' + nombre)}
let logicaS = function(nombre) {console.log('hola mi nombre es ' + nombre)}

function saludar(functionPasada, nombre) {
  console.log('Disculpe, perdone que le moleste,  pero');
  functionPasada(nombre);
  console.log('Espero que pases una buena velada');  
}

saludar(logicaS, 'jeams');



function processClickEvent(event) {
 //cuando haces un click 
  
}

let itemP;
// itemP.onClick(processClickEvent);    


