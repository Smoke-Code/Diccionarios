// FOR 
// Cuanndo se conoce previamente el numero de iteeraciones o el rango para iterar
// Cuando se necesita un contador o manejar el indice de los elementos a los que se accede en el bucle 
#include <stdio.h>

int main(){
  int contador_externo, 
      contador_interno;
  
  for(contador_externo = 0; contador_externo <=3; contador_externo++){
    printf("Comienzo del bucle externo ");
    printf("Contador del bucle externo => %d : \n", contador_externo);
    for (contador_interno = 0; contador_interno <=3; contador_interno++) {
      printf("Contador del bucle interno => %d : \n: ", contador_interno); 
    }
    printf("Fin del bucle externo \n");
  }
}
