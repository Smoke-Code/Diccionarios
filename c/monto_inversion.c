#include <stdio.h>
#include <math.h>

int main(){
  float cantidad, interes, annos, total;
  
  printf("Introduzca la cantidad a invertir => ");
  scanf("%f", &cantidad);
  printf("Introduzca la tasa de interes anual => ");
  scanf("%f", &interes);
  printf("Introduzca el tiempo que tomara la inversion =>  ");
  scanf("%f", &annos);

  printf("\n");

  interes /= 100.0;
  total = cantidad * pow((1.0 + interes), annos);
  printf("La cantidad total acumulada es %f\n", total);
  
  return 0; 
}
