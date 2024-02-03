#include <stdio.h>
enum codigo_color{negro, marron, rojo, naranja, amarillo};

int main(){
  enum codigo_color color;
  char valor;
  printf("Introduzca un entero entre 0 y 4 => ");
  valor = getchar();

  switch (valor) {
    case '0' : color = negro;
              break;
    case '1' : color = marron;
              break;
    case '2' : color = rojo;
              break;
    case '3' : color = naranja;
              break;
    case '4' : color = amarillo;
              break;
  }
  switch (color) {
    case negro : printf("El color es negro\n");
                break;
    case marron : printf("El color es marron\n");
                break;
    case rojo : printf("El color es negro\n");
                break;
    case naranja : printf("El color es negro\n");
                break; 
    case amarillo : printf("El color es negro\n");
                break;
  }
  
}
