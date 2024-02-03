#include <stdio.h>
void explicar_programa(void);
void obtener_valores(float *r, float *v);
float calcular(float resistencia, float voltios);
void imprimir_respuesta(float intensidad);


int main(){
  float resistencia;
  float voltios;
  float intensidad;
  explicar_programa();
  obtener_valores(&resistencia, &voltios );
  intensidad = calcular(resistencia, voltios);
  imprimir_respuesta(intensidad);
}

void explicar_programa(){
  puts("Este es un programa calcula el valor de la intensidad");
  puts("en amperios. Debera introducir el valor de la \n");
  puts(" resistencia y el voltaje en voltios");
  
}

void obtener_valores(float *r, float *v){
  float resistencia;
  float voltaje;

  printf("\n Introduzca la resistencia en ohmios = ");
  scanf(" %f", &resistencia);
  printf("\nIntroduzca el voltaje en voltios = ");
  scanf(" %f", &voltaje);
  *r = resistencia;
  *v = voltaje;
}

float calcular(float resistencia, float voltaje){
  float intensidad;
  intensidad = voltaje / resistencia;
  return(intensidad);
}

void imprimir_respuesta(float intensidad){
  printf("El valor de la intensidad es %f amperios", intensidad);
  
}
