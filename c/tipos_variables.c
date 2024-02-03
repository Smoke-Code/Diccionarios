#include <stdio.h>
#include <sys/types.h>
// VARIABLES GLOBALES
// se declaran fuera de cualquier funcion, normalmente al incio de los archivos, son accesibles desde cualquier funcion

int contador = 0;
void incrementar(){
  contador++;
}


// VARIABLES ESTATICAS
// solo son visibles dentro del archivo donde se declaran. conservan su valor entre llamadas a la funcion

void funcion(){
  static int x = 0;
  x++;

  printf("x: %d\n ", x);
}

int main(){
  funcion();
  funcion();
  funcion();
  return 0; 
}


// VARIABLES EXTERNAS 
// con extern en un archivo y sin extern en otro. permite acceder a una variable global desde diferentes archivos fuente

extern int edad;

int edad = 35;
void mostrar(){
  printf("Edad : \n");
}

// VARIABLES AUTOMATICCAS
// su ambito esta limitado a esa funcion y se destruyen al salir de ella

void funtion(){
  int i;
  
  for(i = 0; i <= 5;i++){
    printf("%d \n", i);
  }
}


// VARIABLES DE REGISTRO
// se almacena en los registros de la CPU en lugar de la memoria. solo pueden ser de tipo int o char 
//
void suma(){
  register int res;

  res = 2*3;
  
}


