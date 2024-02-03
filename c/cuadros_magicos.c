#include <stdio.h>
#include <stdlib.h>

int main(){
  static int cuadrado_magico[9][9];
  int fila, columna, k,n,x,y;
  printf("Introduzca el tamano del cuadrado magico => ");
  scanf(" %d", &n);
  if(0 == n % 2){
    printf("Lo siento, debe introducir un numero impar ");
    system("exit");
    
  }
  k = 2;
  fila = 0;
  columna = (n - 1)/2;

  cuadrado_magico[fila][columna] = 1;
  while(k <= n*n){
    x = (fila - 1 < 0) ? n - 1 : fila - 1;
    y = (columna -1 < 0) ? n - 1 : columna -1;
    if(cuadrado_magico[x][y] != 0){
      x = (fila +1 < n)? fila +1 : 0;
      y = columna;
    }
    cuadrado_magico[x][y] = k;
    fila = x;
    columna = y;
    k++;
    
  }
  for(fila = 0; fila < n; fila++){
    for(columna = 0; columna < n; columna++){
      printf("\t%d", cuadrado_magico[fila][columna]);
      
    }
    printf("\n");
  }
}
