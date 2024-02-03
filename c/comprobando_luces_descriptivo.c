#include <stdio.h>

enum estado_luces{Rojo, Verde, Off} ;
void comprobacion(void);
int comprobar_luces(enum estado_luces condicion);

int main(){
  comprobacion();
}

void comprobacion(){
  char entrada;
  enum estado_luces lectura;
  printf("\n\n1] Rojo 2] Verde 3] Off \n\n");
  printf("Seleccione la condicion luminica por numero =>");
  entrada = getchar();

  switch (entrada) {
    case '1': lectura = Rojo; break;
    case '2': lectura = Verde; break;
    case '3': lectura = Off; break;
  
  }
  comprobar_luces(lectura);
}

int comprobar_luces(enum estado_luces condicion){
  switch (condicion) {
    case Rojo : printf("Comprobar la presion del sistema \n"); break; 
    case Verde : printf("Sistema Correcto \n"); break; 
    case Off : printf("Comprobar el fusible del sistema \n"); break; 
      
  }
  return 0;
}
