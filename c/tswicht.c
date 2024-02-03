#include <stdio.h>

int seleccion(int dato);
float solucion(float ti, float s);

int main(){
  float t, resultado;
  int s;
  
  printf("Ingresa el dato T : \n");
  scanf(" %f", &t);
  printf("Seleccionando una opcion : \n");
  printf("Tienes 1]division 2]elevacion 3]operacion  :");
  scanf(" %d", &s);

  resultado = solucion(t,s);
  printf("El resultado es :  %f", resultado);

  return 0;
}


float solucion(float  ti, float s){
  
  if(s == 1){
    return ti/5;  
  } else if(s == 2){
    return ti * ti;
  }else if(s == 3 || s == 4){
    return 6 * ti/2;
    
  }else {
    return 1;
  }
 return ti; 
}
