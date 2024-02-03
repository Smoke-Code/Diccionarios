#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char texto[] = "Nuestro profesor EXPLICA cada CLASE con CLARIDAD";
  char vstr[] = "AEIOU";
  static int vocales;
  static int vcount[5];
  int j;

  printf("El texto de entrada es => %s ", texto);
  for(j=0; j<strlen(texto); j++){
    if(isalpha(texto[j]) != 0){
      texto[j] = texto[j] & 0xdf;
      
    }
    if(strchr(vstr, texto[j]) != NULL){
      vocales++; 
    }
    switch(texto[j]){
      case 'A': vcount[0]++; break;
      case 'E': vcount[1]++; break;
      case 'I': vcount[2]++; break;
      case 'O': vcount[3]++; break;
      case 'U': vcount[4]++; break;
      
    }
  }
  printf("\n Texto de entrada contiene %d vocales ",vocales);
  printf("Hay %d As, %d Es, %d Is, %d Os, and %d Us ", vcount[0],vcount[1], vcount[2], vcount[3], vcount[4]);
  return 0;
}
