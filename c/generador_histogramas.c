#include <stdio.h>
#include <stdlib.h>

int main(){
  int valores[100];
  static int hist[10];
  int i;

  for(i = 0; i< 100; i++){
    valores[i] = 1 + rand() % 10; 
    
  }
  printf("El conjunto inicial de numeros es : \n");
  for(i = 0; i < 100; i++){
    if(0 == i % 10){
      printf("\n");
      
    }
    printf("%4d", valores[i]);
  }
  for(i = 0; i < 100; i++){
    hist[valores[i] - 1]++;
    
  }
  printf("\n\n El historiograma para los numeros dados es : \n\n");
  for(i = 0; i < 10; i++){
    printf("%4d : \t%d\n", i + 1, hist[i]);
  }
}
