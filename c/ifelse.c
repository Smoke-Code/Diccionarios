#include <stdio.h>
#define PI 3.141592

int main(){
  float eleccion, 
        longitud, 
        area;

  printf("Este programa calcula el area de \n");
  printf("un cuadrado o de un circulo \n");
  printf("Elija el numero : \n");
  printf("1] El area de un circulo \n2] El area de un cuadrado ");
  printf("\nSu eleccion [1 o 2] => ");
  scanf("%f", &eleccion);
  if(eleccion == 1){
    printf("Deme la longitud del radio del circulo => ");
    scanf("%f", &longitud);
    area = PI * longitud * longitud;
    printf("Un circulo de radio %f tiene un area de ", longitud);
    printf("%f unidades cuadradas", area);
    
  }else {
    if(eleccion == 2){
      printf("Deme la longitud de un lado del cuadrado ==> ");
      scanf("%f", &longitud);
      area = longitud * longitud;

      printf("Un cuadrado de longitud %f tiene un area de ", longitud);
      printf("%f unidades cuadradas", area);
      
    }else{
      printf("Eleccion incorrecta.\n");
      printf("Debe de ejecutar el programa de nuevo");
      printf("seleccionando un 1 o un 2 \n");
    }
  }
  printf("\n Aqui termina el programa que calcula\n");
  printf(" el area de un circulo o un cuadrado");
  
}
