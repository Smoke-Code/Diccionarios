#include <stdio.h>

int main() {
  struct{
    char fabricante[20];
    int cantidad;
    float precio_unitario;
  }resistencias;
  float valor_total;
  printf("Nombre del fabricante :");
  fgets(resistencias.fabricante, 20,stdin);
  printf("Numero de piezas :");
  scanf(" %d", &resistencias.cantidad);
  printf("Precio de cada pieza : ");
  scanf(" %f", &resistencias.precio_unitario);

  valor_total = resistencias.cantidad * resistencias.precio_unitario;

  printf("\n\n");
  printf("Articulo : Resistencias\n\n");
  printf("Fabricante : %s\n", resistencias.fabricante);
  printf("Precio Unitario : %f\n", resistencias.precio_unitario);
  printf("Cantidad : %d\n", resistencias.cantidad);
  printf("Valor total : $ %f\n", valor_total);
  
  
  return 0; 
}

