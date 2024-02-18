#include <stdio.h>

int main(){
  int numeros[5] = {60,2,3,4,5};
  int *ptrNumero, *ptrNumero2;
  int diferencia;
  
  ptrNumero = numeros;
  ptrNumero2 = numeros + 2;

  diferencia = ptrNumero2 - ptrNumero;

  printf("La diferencia entre ptrNumero2 y ptrNumero es %d \n", diferencia);
  printf("primero : %d", *ptrNumero);
  printf("segundo : %d", *ptrNumero2);
  
  return 0;
}
