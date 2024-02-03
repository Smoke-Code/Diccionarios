#include <stdio.h>
#include <math.h>

float ingresando_datos();
float calculando(float x1,float x2,float y1,float y2);

int main(){
  float resultado = ingresando_datos();
  printf("La distancia es : %f", resultado);
  return 0;
  
}

float ingresando_datos(){
  float a,b,c,d;
  
  printf("Ingresa el x1 valor : ");
  scanf(" %f", &a);
  printf("Ingresa el x2 valor : ");
  scanf(" %f", &b);
  printf("Ingresa el y1 valor : ");
  scanf(" %f", &c);
  printf("Ingresa el y2 valor : ");
  scanf(" %f", &d);
  
  return calculando(a, b, c, d);
  
}

float calculando(float x1,float x2,float y1,float y2){
  float distancia;
  distancia = sqrt((pow(x1-x2, 2)) + (pow(y1 - y2, 2)) );
  return distancia;
}

