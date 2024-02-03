// DO WHILE 
// Cuando es necesario que el bloque de codigo se ejecute al menos una vez y luego se evalue si continue o no 
// Cuando se necesita procesar o mostrar datos y luego comprobar una condicion de salida 
//

#include <stdio.h>

int main(){
  int tiempo;
  tiempo = 1;

  do{
    printf("Valor del tiempo = %d \n", tiempo);
    tiempo++;
  }while(tiempo <= 5);
  printf("Fin del bucle");
}
