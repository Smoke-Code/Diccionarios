#include <stdio.h>

int main(){
  int numeros[5] ={1,2,3,4,5};
  int *ptrNumeros = numeros;
  for(int i=0; i<5; i++){
    printf("El valor en la posicion %d es %d \n", i, numeros[i]);
    ptrNumeros++;
  }
  return 0;
  
}
