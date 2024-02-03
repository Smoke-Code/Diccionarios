#include <stdio.h>

int fact(int num);


int main(){
  int n;
  printf("Introduzca el valor de N => ");
  scanf(" %d", &n);
  printf("\nn es igual a %5d", fact(n));
  
}

int fact(int num){
  if(num == 0){
    return(1);
    
  }else{
    return(num * fact(num -1));
  }
}
