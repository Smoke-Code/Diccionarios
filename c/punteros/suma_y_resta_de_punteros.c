#include <stdio.h>

int main(){
  int numeros[5] = {1,2,3,4,5};
  int *ptrNumeros, *ptrNumeros2;

  ptrNumeros=numeros;

  ptrNumeros2 = ptrNumeros + 2;
  
  printf("El valor al que apunta ptrNumeros2 es %d\n", *ptrNumeros2 );
  ptrNumeros2 = ptrNumeros2 -1;

  printf("El valor al que apunta ptrNumeros2 es %d\n", *ptrNumeros2);
  return 0;
}
