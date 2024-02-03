#include <stdio.h>

int mismo_tamano(char s1[], char s2[]);
int main(){
  char tira1[] = "Uno";
  char tira2[] = "Dos";
  char tira3[] = "Tres";

  if(1 == mismo_tamano(tira1, tira2)){
    printf(" %s y %s son de la misma longitud \n", tira1, tira2);
  }else{
    printf(" %s y %s son de distinta longitud \n", tira1, tira2);
    
  }
  if(1 == mismo_tamano(tira1,tira3)){
    printf(" %s y %s son de la misma longitud \n", tira1, tira3);
  }
  else{
    printf(" %s y %s son de distinta longitud \n", tira1, tira3);
  }
}

int mismo_tamano(char t1[], char t2[]){
  int i=0, j=0;
  while('\0' != t1[i]){
    i++;
  }
  while('\0' != t2[j]){
    j++;
  }
  if(j == i){
    return(1);
  }
  else{
    return(0);
  }
}
