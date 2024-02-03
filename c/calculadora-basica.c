#include <stdio.h>

int main(){
  float n_1 = 15.0, // primer operador
        n_2 = 3.0, // segundo operador
        r_s, // respuesta de la suma
        r_r, // respuesta de la resta
        r_m, // respuesta de la multiplicacion
        r_d; // respuesta de la division

  r_s = n_1 + n_2;
  r_r = n_1 - n_2;
  r_m = n_1 * n_2;
  r_d = n_1 / n_2;

  printf("15 + 3 = %f\n",r_s);
  printf("15 - 3 = %f\n",r_r);
  printf("15 * 3 = %f\n",r_m);
  printf("15 / 3 = %f\n",r_d);

  return 0;

}



