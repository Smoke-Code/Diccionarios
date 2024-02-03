#include <stdio.h>
int main(){
  char i,j,k;
  int num =0;

  for(i='a'; i <='c'; i++){
    for(j = 'a'; j <= 'c'; j++){
      for(k ='a'; k <= 'c'; k++){
        num++;
        printf("%c%c%c ", i,j,k);
    }
    }
  }

  printf("\n Hay %i cadenas de caraacteres diferentes. \n", num);

  
}
