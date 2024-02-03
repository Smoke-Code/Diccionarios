#include <stdio.h>
#define PI 3.141592
#define cuadrado(x) x*x
#define circulo(r) PI*r*r 

void seleccion_del_usuario(void);
void datos_del_circulo(void);
void datos_del_cuadrado(void);
void seleccioon_erronea(void);

int main(){
  puts("Este programa calcula el area de ");
  puts("un cuadrado o de un circulo ");
  seleccion_del_usuario();
  puts("Aqui termina el programa que calcula");
  puts("el area de un circulo o de un cuadrado");
  return 0;
}

void seleccion_del_usuario(void){
  float eleccion;

  printf("\n Elija un numero : ");
  printf("1] Area de un circulo\n2]Area de un cuadrado\n");
  printf("Su seleccioon [1 o 2] : " );
  scanf("%f", &eleccion);
  if(eleccion == 1){
    datos_del_circulo();
  }
  else{
    if (eleccion == 2) {
      datos_del_cuadrado();
    }
    else {
      seleccioon_erronea();
    }
  }
}

void datos_del_circulo(void){
  float radio, 
        area;

  printf("Deme la longitud del radio del circulo => ");
  scanf("%f", &radio);
  area = circulo(radio);
  printf("Un circulo de radio %f tiene un area de ", radio);
  printf("%f unidades cuadradas", area);

}

void datos_del_cuadrado(void){
  float lado, 
        area;

  printf("Deme la longitud de un lado del cuadrado : ");
  scanf("%f", &lado);
  area = cuadrado(lado);
  printf("Un cuadrado de longitud %f tiene un area de ", lado);
  printf("%f unidades cuadradas", area);
  
}

void seleccioon_erronea(void){
  printf("Eleccion incorrecta");
  printf("Debe de ejecutarse el programa de nuevo \n");
  printf("seleccionando un 1 o un 2 \n");
}

