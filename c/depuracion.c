#include <stdio.h>

#define DEPURACION

int main(){
  #ifdef DEPURACION // el codigo se compila en ciertas circunstacias pero no en otras
    printf("Seccion de depuracion del programa \n");
    printf("Este mensaje aparecera solo si se deine DEPURACION\n");
  #endif  // termina la compilacion seleccionada desde el #ifdef anterior
    printf("Parte principal del programa \n");
    printf("No depende de si esta definido DEPURACION o no \n");
  #ifdef DEPURACION
    printf("Aqui termina la depuracion \n"); 
  
  #else  // presenta una opcion de compilacion
    printf("No se ha usado depuracion\n");
  #endif    
}
