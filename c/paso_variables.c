// solo  es posible el void cuando se  va a devolver un unico valor 
#include <stdio.h>

int llameme(void);

int main(){
  int x;

  x = llameme();
  printf("el valor de x es : %d ", x);
  return 0;
}

int llameme(void){
  return(5);
}
