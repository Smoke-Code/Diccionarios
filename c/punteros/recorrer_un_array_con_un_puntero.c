#include <stdio.h>

void imprimir(int *ptrA, int longi){
  for(int i=0; i<longi; i++){
    printf(" %d", *ptrA);
    ptrA++;
  }
  printf("\n");
}

int main(){
  int numeros[5] = {1,2,3,4,5};
  imprimir(numeros, 5);
  return 0;
}
