#include <stdio.h>
#include <string.h>

int dispersion(char nombre[]);

int main(){
  static int tabla_dispersion[32], fin;
  int direccion;
  char var[10];
  do{
    printf("Introduzca el nombre de una variable => ");
    scanf(" %s", var);

    if(0 != strcmp(var, "fin")){
      direccion = dispersion(var);
      if(0 == tabla_dispersion[direccion]){
        printf("Variable nueva, direccion en la tabla = ");
        printf(" %d\n", direccion);
      }
      else{
        printf("Conflicto con %d otras variables !\n", tabla_dispersion[direccion]);
        printf("Direccion de la tabla = %d\n", direccion);
        
      }
      tabla_dispersion[direccion]++;
    }else{
      fin++;
    }
    
  }while(!fin);
  
}

int dispersion(char nombre[]){
  int val, mitad;

  mitad = strlen(nombre)/2;
  val = nombre[0] + nombre[mitad] + nombre[strlen(nombre) - 1];
  val >>=2;
  val &= 31;
  return(val);
  
}
