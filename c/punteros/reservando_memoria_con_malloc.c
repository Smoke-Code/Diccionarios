#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptrNumero;

  ptrNumero = malloc(sizeof(int));

  if(ptrNumero == NULL){
    printf("Error al reservar memoria\n");
    return 1;
  }

  *ptrNumero = 10;
  
  printf("El valor del entero es %d \n", *ptrNumero);
  return 0; 
}
