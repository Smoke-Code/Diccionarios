#include <stdio.h>

// funcion del tercer programa 
void calculo_de_potencia(float voltaje);

int main()
{
 /* float numero;
  printf("Deme el numero del 1 - 10 ==>");
  scanf("%f", &numero);
  if(numero > 5){
    printf("El numero es mayor que 5 \n");
  }
  printf("El numero leido fue %f ", numero);
  
  return 0;
  */

  /*float voltaje, 
        resistencia, 
        potencia;
  printf("Introduzca el voltaje medido en voltios => ");
  scanf("%f", &voltaje);

  if(voltaje >= 100.0){
    printf("Voltaje es mayor o igual que 100 V\n");
    printf("Introduzca el valor de la resistencia => ");
    scanf("%f", &resistencia);
    potencia = voltaje * voltaje;
    printf("La disipacion de potencia es %f vavtios \n", potencia);
  }
  printf("Confirmacion del valor de entrada de %f voltios\n",voltaje);
  return 0;
  */ 
  float voltaje;
  
  printf("Introduzca el voltaje medido en voltios => ");
  scanf("%f", &voltaje);

  if(voltaje >= 100.0){
    calculo_de_potencia(voltaje);
    printf("Confirmacion dele valor de entrada de %f voltios ", voltaje);
  }

  return 0;
  
}

void calculo_de_potencia(float voltaje){
  float resistencia, 
        potencia;

  printf("Voltaje es mayor o igual que 100 V\n");
  printf("Introduzca el valor de la resistencia => ");
  scanf("%f", &resistencia);
  potencia = voltaje * voltaje / resistencia;
  printf("La disipacion de potencia es %f vatios.\n", potencia);
  
}
