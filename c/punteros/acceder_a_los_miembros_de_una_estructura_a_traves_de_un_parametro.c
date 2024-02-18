#include <stdio.h>
#include <string.h>

struct Persona{
  char nombre[50];
  int edad;
};

int main(){
  struct Persona persona;
  struct Persona *ptrPersona;

  ptrPersona = &persona;

  strcpy(ptrPersona->nombre, "george david");
  ptrPersona->edad = 30;

  // ojo el operador -> es unicamente para las estructuras
  printf("Nombre : %s\n", ptrPersona->nombre);
  printf("Edad : %d\n", ptrPersona->edad);
  
}
