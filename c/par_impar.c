#include <stdio.h>

int main(){
  int num;

  printf("Digita el numero : \n");
  scanf(" %d", &num);
  
  if(num == 0){
    printf(" el numero es %d es nulo", num); 
  }else if(num % 2 == 0){
    printf(" el numero es %d es par", num); 
  }else{
    printf(" el numero es %d es impar", num); 
    
  }
}
