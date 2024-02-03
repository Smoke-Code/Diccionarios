#include <stdio.h>

typedef struct{
  char pieza[20];
  int cantidad;
  float precio_unitario;
} registro_piezas;

int main(){ 
  static registro_piezas contenido_caja1 = {
    "Resistencia", 25,0.05
  };
  
  static registro_piezas contenido_caja2 = {
    "Condensadores", 37, 0.16
  };

  printf("Contenido de la caja #1 \n");
  printf("Elemento => %s\n", contenido_caja1.pieza);
  printf("Cantidad => %d\n", contenido_caja1.cantidad);
  printf("Precio Unitario => %f\n", contenido_caja1.precio_unitario);
  
  printf("Contenido de la caja #2 \n");
  printf("Elemento => %s\n", contenido_caja2.pieza);
  printf("Cantidad => %d\n", contenido_caja2.cantidad);
  printf("Precio Unitario => %f\n", contenido_caja2.precio_unitario);
  
  return 0;
  
}
