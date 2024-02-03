#include <stdio.h>
#include <stdlib.h>

const char PAUSA[] = "PAUSA";

#define max(a,b) ((a>b)? (a) : (b))

int main(){
  
  int res = 0, var1, var2;
  system("clear");
  printf("ingrese un nuevo numero 1: ");
  scanf("%d", &var1);
  printf("\n Ingrese numero 2 :");
  scanf("%d", &var2);
  res = max(var1,var2);
  printf("\nEl mayor es %d", res);
  getchar();
  return 0;
}
