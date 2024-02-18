#include <stdio.h>
#include <math.h>

float areaC(float r);

int main(){
  float radio, area;
  puts("Area de un circulo : ");
  printf("Digita el radio del circulo : "); 
  scanf(" %f", &radio );
  
  area = areaC(radio); 
  printf("El area del circulo es %f ", area);

  return 0;
}

float areaC(float r){
  return (M_PI * pow(r,2));
}

// la forma para compilarlo es 
// gcc -lm nombre -o compilador 


