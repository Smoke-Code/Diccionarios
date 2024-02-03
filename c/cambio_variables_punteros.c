#include <stdio.h>

int main(){
  int *puntero, // un puntero 
      variable; // una posicion para guardar un valor
  
  variable = 1;
  puntero = &variable;
  printf("valor almacenado en variable = %d\n", variable);
  printf("Valor alamcenado en puntero = %d\n", puntero);
  *puntero = 2;
  printf("Nuevo valor almacenado en la variable = %d\n ", variable);
  printf("Valor almacenado en puntero = %d \n", puntero);
 
  return 0;
}
