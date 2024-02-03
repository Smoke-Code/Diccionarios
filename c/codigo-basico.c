#include <stdio.h>

#define pi 3.1416
#define cua(x) ((x)*(x))

int main(){
  double radio,area;

  printf("Calculando el area \n");
  printf("Digita el valor de un radio");
  scanf("%lf",&radio);

  area = (pi * (cua(radio)));

  printf("el area del circulo es %lf ", area);
  return 0;
}
