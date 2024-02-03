#include <stdio.h>

void llamame(int *p);

int main(){
  int x=0;
  printf("El valor de x es %d \n", x);
  llamame(&x);
  printf("El nuevo valor de x es %d \n", x);
  
}

void llamame(int *p){
  *p = 5;
}
