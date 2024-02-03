#include <stdio.h>
#include <string.h>
#define NUM 5

int main(){
  char nombres[5][7] = {
    {'s','u','s','a','n','a'},
    {'m','i','g','u','e','l'},
    {'j','a','v','i','e','r'},
    {'j','u','a','n'},
    {'j','a','v','i'}
    
  };

  char nombre_aux[7];
  int j,k;

  printf("La lista original es : \n");
  for(j =0; j<NUM; j++){
    printf("%s \n", nombres[j]);
  }
  for(j=0; j<NUM-1; j++){
    for(k=j+1; k < NUM; k++){
      if(strcmp(nombres[j], nombres[k])){
        strcpy(nombre_aux, nombres[j]);
        strcpy(nombres[j], nombres[k]);
        strcpy(nombres[k], nombre_aux);
        
      }
    }
  }
  printf("\n La lista ordenada es : \n");
  for(j=0; j<NUM; j++){
    printf(" %s \n", nombres[j]);
  }
}
