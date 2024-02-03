#include <stdio.h>
#define VERDADERO 1
#define FALSE 0

void depuracion(int activa, int muestra, int pasoapaso);

int main(){
  int contador, depuracion;
  char c;

  depuracion = VERDADERO;
  contador = 0;
  while(contador != 9){
    contador += 2;
    if(depuracion){
      printf("Contador = %d\n", contador);
      scanf(" %c", &c);
    }
  }
  return 0;
}

void depuracion(int activa, int muestra, int pasoapaso){
  char c;
  if(activa == VERDADERO){
    printf(" %d", muestra);
    if(pasoapaso == VERDADERO){
      scanf(" %c", &c);
    }
  }
}
