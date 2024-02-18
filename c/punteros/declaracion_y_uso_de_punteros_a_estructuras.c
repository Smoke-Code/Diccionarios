#include <stdio.h>

struct Persona{
  char nombre[50];
  int edad;
};

int main(){
  struct Persona persona;

  struct Persona *ptrPersona;

  ptrPersona = &persona;
  
  printf("Nombre : %s", ptrPersona->nombre);
  printf("Edad : %d", ptrPersona->edad);

  
  return 0;
  
}
