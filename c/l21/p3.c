#include <stdio.h>

int a,b,c;
int product(int x, int y);

int main(){
  printf("Ingresa cualquier numero del 1 al 100 : \n");
  scanf("%d", &a);
  printf("Ingresa cualquier numero del 1 al 100 : \n");
  scanf("%d", &b);

  c = product(a,b);
  printf("\n %d multiplicado %d = %d\n", a,b,c);
}

int product(int x, int y){
  return x*y;
}


