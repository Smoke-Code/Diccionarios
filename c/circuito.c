#include <stdio.h>
#define PI 3.141592
#define X_c(c,f) 1/(2*PI*f*c)
#define X_l(l,f) 2*PI*f*l 
#define impedancia_serie(c,l,f) X_l(l,f) - X_c(c,f)


int main(){
  float capacidad, // valor de condensador en faradios
        inductancia,  // Valor de la inductancia en henrios
        frecuencia, // Valor de la frecuenca en hertzios
        imped; // Valor de la impedancia del circuito en ohmios
  

  printf("Dame la capacidad => ");
  scanf("%f", &capacidad);
  printf("Dame la Dame la inductancia => ");
  scanf("%f", &inductancia);
  printf("Dame la frecuencia => ");
  scanf("%f", &frecuencia);

  imped = impedancia_serie(capacidad, inductancia, frecuencia);

  printf("La impedancia de un circuito LC en serie con una \n");
  printf("capacidad de %e faradios, ", capacidad);
  printf("y una inductancia de %e henrios \n", inductancia);
  printf("es %e ohmios\n", imped);

  return 0;
  
}

