#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int *argc, char *argv[]){
  int cont = 0;
  system("clear");
  for (cont = 0; cont < argc; cont++){
    printf("Parametro [%d] - Texto [%s]", cont, argv[cont]);
  }
  getchar();
  return 0;
}
