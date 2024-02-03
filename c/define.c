#include <stdio.h>
#define cuadrado(x) ((x)*(x))
#define PI 3.141592
#define area_circulo(r) (PI * cuadrado(r))

int main(){
  float area, radio;
  printf("Dame el radio ==> ");
  scanf("%f", &radio);

  area = area_circulo(radio);

  printf("El area de un circulo de radio %f\n", radio);
  printf("es %f unidades cuadradas\n", area);
  return 0;
}
