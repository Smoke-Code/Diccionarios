#include <stdio.h>

int ingreso_datos();
int validar(int total);
int seleccion();

int main(){
  int total=0;
  total = ingreso_datos();
  int opcion = seleccion();
  validar(total);
  
  return 0;
}


int ingreso_datos(){
  int cantidad = 0, total = 0 ; 
  do{
    printf("Digite la cantidad ingresada : \n");
    scanf(" %d", &cantidad);
    total += cantidad;
    
  }while(total < 50);
 
  return(total);
}

int validar(int total){

  int vuelto;
  
  if( total>= 50){
    
    vuelto = total - 50; 
    
    printf("\nLa cantidad de vuelto es %d \n", vuelto);
    
  }else{
    printf("\nLa cantidad de vuelto es %d \n", vuelto);
  }

  return vuelto;
}

int seleccion(){
  int opcion;
  printf("Elije el producto : \n");
  printf("1] Chocolate \n");
  printf("2] Gaseosa \n");
  printf("3] Galletas \n");
  printf("4] Paneton \n ");
  printf("Selecciona el valor : ");
  scanf(" %d", &opcion);
   
  switch (opcion) {
    case 1:{
      printf("Su seleccion es el Chocolate ");
      break;
    }
    case 2:{
      printf("Su seleccion es Gaseosa");
      break;
    }
    case 3:{
      printf("Su seleccion es la Galleta");
      break;
    }
    case 4:{
      printf("Su selesccion es el Paneton");
      break;
    }
    default:{
      printf("Su seleccion no es la correcta ");
    }
    
  
  }

  return opcion;
}













