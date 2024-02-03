#include <stdio.h>

void comprobacion(void);
int comprobar_luces(char condicion);

int main(){
  comprobacion();
  
}

void comprobacion(){
  char entrada;
  printf("\n\n1]Rojo 2]Verde 3]Off \n\n");
  printf("Seleccione la condicion luminica por numero : \n");
  entrada = getchar();

  comprobar_luces(entrada);
  return;
}


int comprobar_luces(char condicion){
  switch (condicion) {
    case '1' : printf("Comprobar la presion del sistema \n"); break;
    case '2' : printf("Sistema correcto \n"); break;
    case '3' : printf("Comprobar fusible del sistema \n"); break;
    
  
  }
  return 0;
}
