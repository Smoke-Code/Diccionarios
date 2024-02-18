#include <stdio.h>
#include <stdlib.h>

int main(){
  // int *ptr = malloc(sizeof(int) * 5);
  // free(ptr);
  int numero =  10;
  int *ptrNumero;
  
  ptrNumero = &numero;
  printf("El valor de la variable numero es % d\n", numero);
  printf("El valor al que apunta ptrNumero es % d\n", *ptrNumero);

  *ptrNumero = 20;
  printf("El valor de la variable numero es % d\n", numero);


  

  return 0; 
}
