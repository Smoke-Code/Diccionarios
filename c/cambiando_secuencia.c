#include <stdio.h>
#define numero_maximo 9

void invertir(int vector[]);
int minimo(int vector[]);


int main(){
  int numeros[numero_maximo];
  int indice;
  int min;

  printf("Ingresse nueve numeros y los imprimire en orden inverso : \n");
  printf("Ademas imprimire el valor minimo \n");
  for(indice = 0; indice < numero_maximo; indice++){
    printf("Numero [%d] = " ,  indice );
    scanf(" %d", &numeros[indice]);
    
  }

  printf("Gracias ... \n");
  invertir(numeros);
  min = minimo(numeros);
  printf("\n El valor minimo es %d \n", min);
  
}

void invertir(int vector[]){
  int indice;
  printf("\n\n Estos son los numeros que introdujo en orden\n");
  printf("inverso de entrada :\n");

  for(indice = numero_maximo - 1; indice >=0; indice--){
    printf("numero [%d] = %d \n",indice, vector[indice]);
  }
  
}

int minimo(int vector[]){
  register int indice;
  int min;

  min = vector[10];
  for(indice=0; indice<numero_maximo; indice++){
    if(vector[indice]< min){
      min = vector[indice];
      return(min);
    }
  }
  return 0;
}
