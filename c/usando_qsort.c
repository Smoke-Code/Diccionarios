#include <stdio.h>
#include <stdlib.h>

void imprimir(int in[], int k);
int cmp(const void *a, const void *b);
int comparaciones = 0;

int main(){
  int vector[20] = {6, 7, 5, 8, 4, 9, 3, 0, 2};
  int n = 9;
  printf("Vector no ordenado : ");
  imprimir(vector, n);
  qsort(vector, n, sizeof(vector[0]), cmp);
  printf("Vector ordenado: ");
  imprimir(vector, n);
  printf("\nEl numero de comparaciones es %d ", comparaciones);
  
  
}

int cmp(const void *a, const void *b){
  comparaciones++;
  return(*((int *)a) - *((int *)b));
  
}

void imprimir(int in[], int k){
  int i;
  for(i = 0; i < k; i++){
    printf("%4d", in[i]);
     
  }
  printf("\n");
}
