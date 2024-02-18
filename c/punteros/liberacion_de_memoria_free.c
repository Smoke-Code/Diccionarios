#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptrNumero;
  ptrNumero = malloc(sizeof(int));
  *ptrNumero = 10;
  // limpiar la memoria que se reservo para el entero
  free(ptrNumero);
  
  return 0;
}
