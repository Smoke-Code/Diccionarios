// strpbrk() 
// busca la primera aparicion de cualquier caracter de una subcadena dentro de una cadena 
#include <stdio.h>
#include <string.h>

int main(){
  char texto[80];
  char *puntero;
  printf("Introduzca una cadena con signos de puntuacion : ");
  fgets(texto, 80, stdin);
  puntero = texto;

  while(puntero != NULL){
    puntero = strpbrk(puntero,".,!;'?-");
    if(puntero != NULL){
      *puntero = ' ';
      
    }
  }
  printf("\n %s ", texto);
  return 0;
}
