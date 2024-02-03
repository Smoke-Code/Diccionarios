#include <stdio.h>

int main(){
  int vector_numeros[7];
  int indice;

  vector_numeros[0] = 0;
  vector_numeros[1] = 2;
  vector_numeros[2] = 4;
  vector_numeros[3] = 8;
  vector_numeros[4] = 16;
  vector_numeros[5] = 32;
  vector_numeros[6] = 64;

  for(indice = 1; indice <= 5; indice++){
    printf("vector_numeros[%d] = %d \n", indice, vector_numeros[indice]);
    printf("vector_numeros[%d + 1] = %d \n", indice, vector_numeros[indice + 1]);
    printf("vector_numeros[%d - 1] = %d \n", indice, vector_numeros[indice - 1]);
  }

  return 0;
  
}
