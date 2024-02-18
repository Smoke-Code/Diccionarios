#include <stdio.h>
int main(){
  int numero = 10;
  int *ptrNumero;

  ptrNumero =&numero;
  *ptrNumero = 30;

  printf("El nuevo valor del puntero es %d", *ptrNumero);
  return 0;
  
}
