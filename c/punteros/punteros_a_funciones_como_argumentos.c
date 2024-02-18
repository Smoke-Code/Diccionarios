#include <stdio.h>

void imprimirMensaje(char *mensaje){
  printf(" %s", mensaje);
}

// funcionara si le indicamos que acepte un tipo de dato en la funcion 
void ejecutarFuncion(void(*ptrFuncion)(char *), char *argumento){
  ptrFuncion(argumento);
}

int main(){
  void(*ptrFuncionImprimirMensaje)(char *) = imprimirMensaje;

  ejecutarFuncion(ptrFuncionImprimirMensaje, "hola mundo");
  return 0;
}

