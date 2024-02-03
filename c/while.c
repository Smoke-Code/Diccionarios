// WHILE 
// Cuando no sabes previamente cuantas iteraciones necesitas.
// Cuando necesitas repetir un bloque mientras se cumplia una condicion que puede cambiar
// como esperar a que se complete una tarea asincronaj
#include <stdio.h>

int main(){
  char respuesta = 's';
  while(respuesta != 'n'){
    printf("Este es el cuerpo del programa \n");
    printf("quiere repetir este programa (s/n) : ");
    scanf(" %c", &respuesta);
    getchar();
    printf("\n");
    
  }
  printf("Gracias por usar este programa");
  
}
