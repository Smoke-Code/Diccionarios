// COMPLETA EL CODIGO ES UNA LISTA DONDE PODRAS MARCAR LAS TAREAS REALIZADAS 

const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stout
});


let taskList = [];

function addTask(taskList, taskDescription){
  taskList.push({done: false, description: taskDescription});
}


function printTaskList(taskList) {
  for (let i=0; i <taskList.length; ++i){
    if (taskList[i].done){
      console.log('[x]'+ taskList[i].description); 
    }else{
      console.log('[ ]'+ taskList[i].description); 
    }
  } 
}
function askForTasks(taskList){
  rl.question('Introduce una nueva taraea (fin si terminas)', function(taskDesc){
    if(taskDesc === 'fin'){
      console.log('No se introducen mas tareas');
      rl.close();
    }else{
      addTask(taskList, taskDesc);
      console.log('La lista de tareas actual es : ');
      printTaskList(taskList);
      askForTasks(taskList);
    } 
  });
}

askForTasks(taskList);
