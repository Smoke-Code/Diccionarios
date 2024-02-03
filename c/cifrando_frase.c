// AQUI EXISTE UN ERROR 



#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  char entrada[80];
  char codificador[9][9];
  int r=0,c=0,p=0,n,i=0;

  printf("Introduzca el texto a codificar : ");
  fgets(entrada, 80, stdin);

  for(n=0; n<strlen(entrada); n++){
    if(entrada[n] == ' '){
     i++; 
    }
  } 
  n = 1 + sqrt(strlen(entrada) - i);
  for(r = 0; r<9; r++){
    for(c=0; c<9; c++){
      codificador[r][c] = ' ';
      
    }
  }

  while(entrada[p] != '\0'){
    if(entrada[p] != ' '){
      codificador[r][c] = entrada[p];
      r++;
      if(r == n){
        r = 0;
        c++;
      }
    }
    p++;
  }
  printf("Codificacion por transposicion :");
  for ( r=0; r<9; r++){
    for( c=0; c<9; c++){
      if(codificador[r][c] != ' '){
        printf(" %c", codificador[r][c]);
      }
    }
  }
  return 0;
  
}
