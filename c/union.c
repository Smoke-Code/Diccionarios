// Si quieres manejar la memoria tenemos que tener en cuenta la diferenecia entre union y struc 
// union : todos los miembros tienen la misma ubicacion y no se pueden cambiar 
// struct : los miembros tienen cada uno su ubicacion unica cada uno
// ten en cuenta que los puedes usar en ciertos escenarios cada uno para optimizar el uso de la memoria
#include <stdio.h>

int main(){
  union {
    int valo_entero;
    float valo_real;
    
  }entero_real;
  printf("Tamano de la union => %d bytes \n", sizeof(entero_real.valo_entero));
 
  entero_real.valo_entero = 123;
  printf("El valor entero es %d \n", entero_real.valo_entero);
  printf("Direccion de comienzo => %d\n", &entero_real.valo_entero);

  entero_real.valo_real = 123.45;
  printf("El valor real es %f\n", entero_real.valo_real);
  printf("Direccion de comienzo => %d \n", &entero_real.valo_real);
  
  return 0;
}


