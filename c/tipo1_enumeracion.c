#include <stdio.h>

enum codigo_color {negro, marron, rojo, naranja, amarillo};

int main(){
  enum codigo_color color;
  for(color = negro;color<=amarillo; color++){
    printf("Valor numerico del tipo enumerado color => %d \n", color);
  }
}
