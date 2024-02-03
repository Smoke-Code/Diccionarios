#include <stdio.h>

float cuadrado(float numero){
  float respuesta;
  respuesta  = numero * numero;
  return(respuesta);

}



int main(){
  float valor, respuesta;

  printf("Dame un numero y lo elevare al cuadrado : ");
  scanf("%f", &valor);
  respuesta = cuadrado(valor);
  printf("El cuadrado de %f es %f", valor, respuesta);
  return 0;
  
}

