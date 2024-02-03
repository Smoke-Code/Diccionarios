#include <stdio.h>

void funcion1(char nombre[]);

int main(){
  char cadena[20];
  printf("Cual es tu nombre => ");
  fgets(cadena,20, stdin);
  funcion1(cadena);
  return 0;
}

void funcion1(char nombre[]){
  printf("Hola %s!", nombre);
}
