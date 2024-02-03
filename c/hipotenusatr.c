#include <stdio.h>
#include <math.h>

int main(){
  float lada, ladb,ladc; // indicando todos los lados 

  printf("Introduzca el lado A : ");
  scanf("%f", &lada);
  printf("Introduzca el lado B : ");
  scanf("%f", &ladb);

  ladc = sqrt(lada*lada + ladb*ladb);
  printf("\n La longitud de la hiponusa es %5.2f", ladc);

  return 0;
}
