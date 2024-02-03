#include <stdio.h>

int main(){
  float valor_logico;
  printf("Valores logicos de las siguientes realaciones : \n\n");
  valor_logico = (3>5);
  printf("(3>5) es %f \n", valor_logico);
  valor_logico = (5>3);
  printf("(5>3) es %f \n", valor_logico);
  valor_logico = (3>=5);
  printf("(5>=3) es %f \n", valor_logico);
  valor_logico = (15 >= 3*5);
  printf("(15>=3*5) es %f \n", valor_logico);
  valor_logico = (8 < (10-2));
  printf("(8<(10-2) es %f \n", valor_logico);
  valor_logico = (2*3 < 24/3);
  printf("(2*3 < 24/3) es %f \n", valor_logico);
  valor_logico = (10< 5);
  printf("(10<5) es %f \n", valor_logico);
  valor_logico = (24<= 15);
  printf("(24 <= 15) es %f \n", valor_logico);
  valor_logico = (36/6 <= 2*3);
  printf("(36/6 <= 2*3) es %f \n", valor_logico);
  valor_logico = (8 == 8);
  printf("(8 == 8) es %f \n", valor_logico);
  valor_logico = (12 + 5 == 15);
  printf("(12 + 5 == 15) es %f \n", valor_logico);
  valor_logico = ( 8 != 5);
  printf("(8 != 5) es %f \n", valor_logico);
  valor_logico = (15 != 3 *5 );
  printf("(15 != 3*5) es %f \n", valor_logico);
  
  
  return 0; 
}
