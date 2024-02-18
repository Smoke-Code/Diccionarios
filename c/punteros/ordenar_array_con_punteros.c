#include <stdio.h>
#include <stdlib.h>
void intercambiar(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void ordenarBurbuja(int *ptrA, int longitud){
  // se le anade el -1 porque no hay con quien compararlo el ultimo elemento 
  for(int i=0; i<longitud-1;i++){
    // asegura que el bucle no se ejecute para los elementos que ya fueron comparados
    for(int j=0; j<longitud-i-1; j++){
      if(ptrA[j]> ptrA[j+1]){
        intercambiar(&ptrA[j],&ptrA[j+1]);
      }
    }
  }
}

int main(){
  int numero[5] = {5,2,1,8,4};

  ordenarBurbuja(numero, 5);

  for(int i=0; i<5; i++){
    printf(" %d", numero[i]);
  }
  printf("\n");
  return 0;
}
