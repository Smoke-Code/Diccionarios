#include <stdio.h>

int main(){
  float temp_fahrenheit;
  float temp_centigrados;

  puts("");
  puts("Este programa convertira una temperatura leida en ");
  puts("grados Fahrenheit a su equivalente en  ");
  puts("grados centigrados ");
  puts(" ");
  puts("Introduzca la temperatura en grados Fahrenheit ");
  puts("y el programa hara el resto. ");
  
  puts(" ");
  
  printf("Introduzca la temperatura en grados Fahrenheit => ");
  scanf("%f", &temp_fahrenheit);

  temp_centigrados = 5.0/9.0 * (temp_fahrenheit - 32);

  puts(" ");
  printf("Una temperatura de %f grados Fahrenheit \n", temp_fahrenheit);
  printf("es iguala %f grados centigrados. \n", temp_centigrados);

  
  return 0;
}
