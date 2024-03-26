#include <stdio.h>
#include <string.h>

int main(){
  char buffer[256];
  int cantidad;
  printf("Digite su nombre y presione enter : ");
  // tener en cuenta que se debe tener el buffer predefinido
  fgets(buffer,sizeof(buffer), stdin);
  
  cantidad = strlen(buffer);
  printf("\n Tu nombre tiene %d caracteres y espacios!", cantidad);
  
}
