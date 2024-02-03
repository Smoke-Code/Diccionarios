#include <stdio.h>

int main(){
  char valor,  // posicion de memoria para guarfar un caracter
       *puntero; // un puntero
  
  valor = 97;
  printf(" %u => | %d | <= direccion y datos de valor \n", &valor, valor);

  puntero = &valor;
  printf("%u => | %d | <= direccion y datos de puntero \n", &puntero, puntero);
  printf("\n Valor almacenado en puntero = %d \n", puntero);
  printf("Direccion de puntero : &puntero = %u \n", &puntero);
  printf("Valor referenciado por puntero: * *puntero = %d\n ", *puntero);
  
  return 0;
  
}
