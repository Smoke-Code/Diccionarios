// strcmp() y strncmp()
// se usan para comparar cadenas de caracteres 
#include <stdio.h>
#include <string.h>

void comparar(char tira1[], char tira2[]);

int main(){
  char cadena_a[] = "comprador";
  char cadena_b[] = "compras";
  char cadena_c[] = "comprador";
  char cadena_d[] = "bola";

  comparar(cadena_a, cadena_b);
  comparar(cadena_a, cadena_c);
  comparar(cadena_a, cadena_d);
  
}


void comparar(char tira1[], char tira2[]){
  int valor;
  valor = strcmp(tira1, tira2);
  if(valor == 0){
    printf("%s es igual que %s \n", tira1,tira2);
    
  }else if(valor <0){
    printf("%s es menor que %s \n", tira1,tira2);
  }else{
    printf("%s es mayor que %s \n", tira1,tira2);
  }
}
