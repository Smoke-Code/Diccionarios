#include <stdio.h>

int sum(int k);

int main(){
  int resultado = sum(10);
  printf(" %d", resultado);

  return 0; 
}

int sum(int k){
  if(k > 0){
    // sumara todo los numeros en sum(k - 1 ) = 45 + 10 = 55 se repetira hasta que llegue a 0
    return (k + sum(k - 1));  // este es el loop 
  }else{
    return 0; 
  }
}
