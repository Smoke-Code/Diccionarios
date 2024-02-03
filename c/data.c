#include <stdio.h>

#define pi 3.1415

float calcular(float r, float a);

int main(){
  float radio, 
        altura;
  printf("Digite el radio : ");
  scanf(" %f", &radio);
  printf("Digite la altura : ");
  scanf(" %f", &altura);
  calcular(radio,altura);
  
}

float calcular(float r, float a){
  float volumen;
  volumen = pi * (r*r) * a;
  printf("El volumen del cilindro es : %f", volumen);
  return 0;
  
}
