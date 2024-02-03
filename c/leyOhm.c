#include <stdio.h>

int main(){
  float voltaje, intensidad, resistencia;

  printf("Introduzca la intensidad en amperios => ");
  scanf("%f", &intensidad);
  printf("Introduzca la resistencia en amperios => ");
  scanf("%f", &resistencia);

  voltaje = intensidad * resistencia;
  printf("El valor del voltaje es %f voltios", voltaje);
  
  return 0;
}
