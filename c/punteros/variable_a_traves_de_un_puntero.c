#include <stdio.h>

int main(){
  int numero = 20;
  int *ptrNumero;
  ptrNumero = &numero;

  printf("El valor de la variable numero es %d", *ptrNumero);

  return 0;
}
