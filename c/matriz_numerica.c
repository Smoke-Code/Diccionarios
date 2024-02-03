#include <stdio.h>

void sumar_columnas(int matriz_ent[][3], int valor_columna[]);
void sumar_filas(int matriz_ent[][3], int valor_fila[]);

int main(){
  static int matriz[2][3] = {
    {10,20,30}, 
    {11,21,31}
  };
  int fila, columna;
  int valor_columna[3];
  int valor_fila[2];

  for(fila = 0; fila < 2; fila++){
    for(columna = 0; columna < 3; columna++){
      printf("%5d", matriz[fila][columna]);
    }
    printf("\n");
  }
  sumar_columnas(matriz,valor_columna);
  for (columna = 0; columna < 3; columna++){
    printf("La suma de la columna %d es %d\n", columna,valor_columna[columna]);
    
  }
  sumar_filas(matriz, valor_fila);
  for(fila = 0; fila<2; fila++){
    printf("La suma de la fila %d es %d \n", fila, valor_fila[fila]);
    
  }
}

void sumar_columnas(int vector_ent[][3], int valor_columna[]){
  int fila;
  int columna;
  for(columna = 0; columna < 3; columna++){
    valor_columna[columna] = 0;
    for(fila = 0; fila <2; fila++){
      valor_columna[columna] += vector_ent[fila][columna];
      
    }
  }
}

void sumar_filas(int vector_ent[][3], int valor_fila[]){
  int fila;
  int columna;
  for(fila = 0; fila<2; fila++){
    valor_fila[fila] = 0;
    for (columna = 0; fila <2; fila++) {
      valor_fila[fila] = 0;
      for(columna = 0; columna < 3; columna++){
        valor_fila[fila] += vector_ent[fila][columna]; 
      }
    
    }
  }
}
