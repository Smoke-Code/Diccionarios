#include <stdio.h>

typedef struct {
  char pieza;
  int cantidad;
  float precio_unitario;
  char existe;
}registro_piezas;

int main(){
  static registro_piezas contenido[3];
  int registro;
  int i;

  do {
    printf("Introduzca un nummero de caja 1 y 3 (0 para salir ) : ");
    scanf(" %d", &registro);

    --registro;
    
    if(registro < 0) continue;

    printf("Nombre de la pieza => ");
    scanf(" %s", &contenido[registro].pieza);

    printf("Numero de piezas => ");
    scanf(" %d", &contenido[registro].cantidad);

    printf("Numero de cada pieza => ");
    scanf(" %f", &contenido[registro].precio_unitario);
    
    contenido[registro].existe = 'V';
  }while (registro>=0);
  
  for(registro = 0; registro<=2; registro++){
    if (contenido[registro].existe == 'V') {
      printf("La caja %d contiene : \n", registro + 1);
      printf("Pieza => : %c \n", contenido[registro].pieza);
      printf("Cantidad => %d\n", contenido[registro].cantidad);
      printf("Precio Unitario => $%f\n", contenido[registro].precio_unitario);
    }
  }
  
  
}
