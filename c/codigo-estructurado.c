 
#include <stdio.h>

#define pi 3.14159
#define cuadrado(x) ((x)*(x))

void explica_el_programa(void);
float obtener_valor(void);
float area_del_circulo(float radio);
void mostrar_la_respuesta(float area);

int main(){
  float radio;
  float area;

  explica_el_programa();
  radio = obtener_valor();
  area = area_del_circulo(radio);
  mostrar_la_respuesta(area);

}
void explica_el_programa(void){
  printf("este programa calcula el area de un circulo \n");
  printf("Introduzca el valor de l radio y pulse -RETURN- \n" );
  printf("\n");
}

float obtener_valor(void){
  float valor_de_entrada;
  printf("Valor del radio ==> ");
  scanf("%f", &valor_de_entrada);
  return(valor_de_entrada);

}
float area_del_circulo(float radio){
  float area;
  area = pi * cuadrado(radio);
  return(area);
}

void mostrar_la_respuesta(float area){
  printf("\n\n");
  printf("El area del circulo es %f unidades", area);
}
