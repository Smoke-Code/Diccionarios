#include <stdio.h>
#include <stdlib.h>

int main(){
  int longitud = 5;
  int *ptrA;

  ptrA = malloc(sizeof(int) *longitud);

  if(ptrA == NULL){
    printf("Error al reservar la memoria");
    return 1;
    
  }

  for (int i=0; i<longitud; i++) {
    ptrA[i] = i + 1;
  }

  for(int i=0;i<longitud; i++){
    printf(" %d", ptrA[i]);
  }
  printf("\n");
  free(ptrA);

  return 0;
  
}
