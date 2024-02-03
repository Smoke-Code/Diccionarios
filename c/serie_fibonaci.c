#include <stdio.h>

int main(){
  int n, anterior, nuevo, temp, j;
  printf("Introduzca el numero de terminos que se generaran : ");
  scanf(" %i", &n);
  anterior = 0;
  nuevo = 1;

  printf("%4i %4i", anterior, nuevo);
  for(j =1 ; j <= n -2; j++){
    temp = anterior + nuevo;
    anterior = nuevo;
    nuevo = temp;
    printf(" %4i ", nuevo);
  }

  return 0;
}
