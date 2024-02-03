// strstr()
// busca la primera ocurrencia de una subcadena 
#include <stdio.h>
#include <string.h>

int main(){
  char texto[] = "ES importante que este bloque de texto"
    " contenga la palabra 'el' tantas veces como sea"
    " posible, ya que la funcion strstr() contara "
    " el numero de veces que aparece 'el'"
    " se trata de una simple operacion matematica"
    " Cuantas veces aparece el termino 'el";

  char *puntero;
  int contador = 0;
  puntero = texto;

    
  while(puntero != NULL){
    puntero = strstr(puntero, "el");

    if(puntero != NULL){
      contador++;
      
      puntero++;
    }
    
  }

  printf("La palabra 'el' aparece %d veces \n", contador);
  
  return 0;
}

