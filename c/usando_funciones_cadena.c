#include <stdio.h>
#include <string.h>

int long_tira(char texto[]);

int main(){
  char alfa[] = "alskdjfajslkdfjlkajsdlf";
  printf("La cadena %s contiene %d caracteres ", alfa, strlen(alfa));
  printf("La cadena %s contiene %d caracteres ", alfa, long_tira(alfa));
  
}

int long_tira(char texto[]){
  int number =0;
  while(texto[number] != '\0'){
    number++;
    
  }
  return (number);
}
