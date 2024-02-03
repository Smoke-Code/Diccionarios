#include <stdio.h>

float cacher(void);
float ramer(void);

int main(){
  char eleccion;
  float tacc; // tiempo en nanosegundos
  printf("Que le gustaria calcular ? \n");
  printf("1] Timepo medio dee acceso a la cache \n");
  printf("2] Tiempo de acceso a la RAM entrelazada \n");
  scanf(" %c",&eleccion);
  switch (eleccion) {
    case '1': tacc = cacher(); break;
    case '2': tacc = ramer(); break;
    default: printf("Perdon. Esa seleccion no es valida");
    
  }
  if((eleccion =='1') ||(eleccion == '2')){
    printf("\n En el tiempo de acceso es %f nanosegundos", tacc);
    
  }
  
}

float cacher(){
  float tac, 
        ram, 
        hit;

  printf("Introduzca el tiempo de accesso a cache (en nanosegundos) : ");
  scanf(" %f", &tac);
  printf("Introduzca el tiempo de accesso a RAM (en nanosegundos) : ");
  scanf(" %f", &ram);
  printf("Introduzca la tasa de aciertos => ");
  scanf(" %f", &hit); 
  return ((hit * tac) + (1.0 - hit) * (tac + ram));
}

float ramer(){
  float n, 
        ram;
  printf("Introduzca el numero de modulos de RAM : ");
  scanf(" %f", &n);
  printf("Introduzca el tiempo de acceso de RAM (en nanosegundos) : ");
  scanf(" %f", &ram);
  return(ram /n);
}
