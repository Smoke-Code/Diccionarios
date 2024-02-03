// SWITCH 
// para validar multiples valores posibles de una expresiono variable 
// como reemplazo de multiples if/else anidados, mejora la legibilidad
// cuando existe la necesidad de ejecutar un mismo codigo para diferentes casos, y usar if/else generaria repeticion
#include <stdio.h>

int main(){
  char eleccion;
  float voltaje, 
        intensidad, 
        resistencia;

  printf("Elija la forma de la ley de Olm que corresponda\n");
  printf("A] voltaje  \nB] intensiddad \nC] resistencia\n");
  printf("su eleccion es [A, B o C] : k\n");
  scanf(" %c", &eleccion);

  switch (eleccion) {
    case 'A': {
      // Calcula el voltaje 
      printf("Introduzca la intensidad en amperios => ");
      scanf(" %f", &intensidad);
      printf("Valor de la intensidad en ohmios => ");
      scanf(" %f", &resistencia);
      voltaje = intensidad * resistencia;
      
      printf("La intensidad es %f voltios", voltaje);
      
    } 
    break;
    case 'B':{
      printf("Introduzca el voltaje en voltios => ");
      scanf(" %f", &voltaje);
      printf("Valor de la resistencia en ohmios => ");
      scanf(" %f", &resistencia);
      intensidad = voltaje / resistencia;
      printf("La intesidad es %f amperios", intensidad);
      
    }
    break;

    case 'C': {
      printf("Introduzca el voltaje en voltios => ");
      scanf(" %f", &voltaje);
      printf("Valor de la intensidad en amperios => ");
      scanf(" %f", &intensidad);
      resistencia = voltaje / intensidad;
      printf("La resistencia es %f ohmios", resistencia);
      
    }
    break;

    default:{
      printf("Eleccion incorrecta ");
      printf("Ejecute  el programa seleccionado A,B,C");
      
    }
  }
  return 0;
}
