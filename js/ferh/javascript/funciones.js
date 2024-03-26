// funcion basica -- no se recomienda para este uso por el uso de var
// function saludar(nombre){
// funciones tradicionales hacen uso de Arguments
function saludar(){
  console.log(arguments);
  console.log('hola mundo');
  // console.log('hola '+nombre);
}
saludar();
// para ver activa el que indica nombre
// saludar('george',21,'alto', false);

// funcion anonima

// const saludar2 = function(nombre){
const saludar2 = function(){
  console.log("hola mundo");
}
saludar2();

// funcion flecha 
const saludarf = () =>{
  console.log('hola');
}

saludarf();

// enviando parametros a funcion flecha
const saludarf2 = (nombre) =>{
  console.log('hola ' +nombre);
}

saludarf2('george');
