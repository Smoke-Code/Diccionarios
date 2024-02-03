#include <stdio.h>

int main()
  int p1 = 6, // primer y tercer valor  
      p2 = 12, // segunda valor
      p3 = 2,  // cuarto valor
      p4 = 1; // quinto valor
  
  float r1,r2,r3,r4; //respuestas de las ecuaciones
  
  r1 = p1 + p2/p1 * p3 - p4;

  r2 = (p1 + p2)/p1 * p3 - p4;

  r3 = p1 + p2/p1 * (p3 - p4);
  
  r4 = p1 + p2/(p1 * p3) - p4;

  printf("el resultado de la primera ecuacion es %f \n", r1);
  printf("el resultado de la segunda ecuacion es %f \n", r2);
  printf("el resultado de la tercera ecuacion es %f \n", r3);
  printf("el resultado de la cuarta ecuacion es %f \n", r4);
  
  return 0;

}
