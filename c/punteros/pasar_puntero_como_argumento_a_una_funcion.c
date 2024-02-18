#include <stdio.h>

void modif(int *ptrNumero){
  *ptrNumero = 9;
}

int main(){
  int numero = 30;
  modif(&numero);
  printf("El dato retornado es %d", numero);

  return 0;
  
}
