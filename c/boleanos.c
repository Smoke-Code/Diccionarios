#include <stdio.h>

int  main(){
  float r;
  r = 0 && 0;
  puts("Trabajando con && logica");
  printf(" 0 && 0 = %f\n", r);
  r = 0 && 1;
  printf(" 0 && 1 = %f \n ",r );
  r = 1 && 0;
  printf(" 1 && 0  = %f \n ",r );
  r = 1 && 1;
  printf(" 1 && 1  = %f \n ",r );
  
  puts("Trabajando con || logica ");
  r = 0 || 0;
  printf("0 || 0 = %f\n",r); 
  r = 0 || 1;
  printf("0 || 1 = %f\n",r); 
  r = 1 || 0;
  printf("1 || 0 = %f\n",r); 
  r = 1 || 1;
  printf("1 || 1 = %f\n",r); 
  
  
  
  return 0; 
}
