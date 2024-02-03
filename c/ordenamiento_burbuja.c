#include <stdio.h>
#define max 9 
void imprimir(int vector[]);
int ordenar(int vector[]);


void imprimir(int vector[]){
  int indice;
  printf("\n\n Los valores ordenados son : \n");
  for(indice = 0; indice < max; indice++){
    printf("Numero [%d] = %d\n", indice,vector[indice]  );
  }
}



int ordenar(int vector[]){
  int indice, 
      seguir, 
      temp, 
      comp = 0;

  do{
    seguir =0;
    for(indice = 0; indice < max; indice++){
      comp++;
      if((vector[indice] > vector[indice + 1]) && (indice != max -1)){
        temp = vector[indice];
        vector[indice] = vector[indice + 1];
        vector[indice + 1] = temp;
        seguir = 1;
      }
      
    }
  }while(seguir);
  return(comp); 
  
}


int main(){
  int numeros[max];
  int indice, comparaciones;
  printf("Deme nueve numeros y los ordenare : \n");
  for(indice = 0; indice < max; indice++){
    printf("Numero [%d] = ", indice);
    scanf(" %d", &numeros[indice]);
  }

  comparaciones = ordenar(numeros);
  imprimir(numeros);
  printf("El numero de las comparaciones es %d ", comparaciones);
  
}


