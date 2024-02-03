#include <stdio.h>

void seleccion(void);
void probar_unidad(void);
void probar_luz(void);
void desconectar_motor(void);

int main(){
  float seleccion;
  puts("Aqui mediremos la autonomia del robot");
  puts("y tambien podremos arreglar el robot");
  puts("Mediremos el voltaje que recibe el robot");
  printf("Deme el voltaje para medir la primera prueba :");
  scanf(" %f", &seleccion);
  if (seleccion < 30){
    desconectar_motor();
  }else if(seleccion >= 30 && seleccion <= 35){
    probar_luz();
  }else if (seleccion > 35) {
    probar_unidad();
  }
  puts("Finalizamos el programa");
  puts("Y arreglamos el robot");
  
}

void probar_unidad(void){
  printf("Sustituiremos la unidad de potencia del brazo\n");
  printf("Es necesario para que el robot funcione\n");
}

void probar_luz(void){
  char data;  

  printf("Indique el estado luminosos \n");
  printf("r] ROJO\nv] VERDE\na]Apagado \n");
  printf("Selecciona el valor entre [r,v,a] : ");
  scanf(" %c", &data);
  switch (data) {
    case 'r':
      printf("Desconecta la potencia y reemplazza fusible F1");
      break;
    case 'v':
      printf("Desconecta potencia y sustituir motor");
      break;
    case 'a':
      printf("Sustituye la lampara");
      break;
    default:{
      printf("No selecciono ninguna de los estados\n");
      printf("Repetir rutina de servicio\n");
    }
  }
  printf("\nFinalizamos el preceso necesario\n");
  printf("Recuerda que debes de volver a consultar para comprobar el funcionamiento\n");
}

void desconectar_motor(void){
  float voltaje;
  printf("Dsconectar el motor del brazo y volver a medir voltaje en TP#1");
  printf("Ingresa el votaje para medirlo: ");
  scanf(" %f", &voltaje);
  if (voltaje >30){
    printf("Sustituye la tarjetaa controladora del brazo y lee la pagina 235 para repetir prueba del servicio ");
  }else if(voltaje < 30){
    printf("Sustituir la mitad de la potencia del brazo, leer la pagina 183 del manual de servicio,\n");
    printf("luego repetir la prueba de SVS");
  }
  
}




