#include <stdio.h>
#include <math.h>
#define pi 3.1415

void ingresando_datos(float *r);
float calculando_area (float r);
float calculando_circunferencia(float r);

int main(){
  float r,ar,cir;
  ingresando_datos(&r);
  ar = calculando_area(r); 
  cir = calculando_circunferencia(r);

  printf("El area del circulo es : %f\n", ar);
  printf("La circunferencia del circulo es : %f", cir);
  
  return 0;
}
  
void ingresando_datos(float *r){
  printf("Ingresando el radio : ");
  scanf(" %f", r);
  
}


float calculando_area (float r){
  float area;
  
  area = pi * pow(r,2);
  
  return area;
}

float calculando_circunferencia(float r){
  float circunferencia;
  circunferencia = (2 * pi * r);
  return circunferencia;
}
