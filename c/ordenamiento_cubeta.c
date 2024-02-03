#include <stdio.h>
int ordenamiento_cubeta(int ent[], int k, int sal[]);

int main(){
  int vector_ent[20] = { 6,7,5,8,4,9,3,0,2};
  int n = 9;
  int vector_sal[20];
  int i, comparaciones;
  printf("Vector no ordenado : ");
  for(i = 0; i<n; i++){
    printf(" %4d",vector_ent[i]);
    
  }
  printf("\n");
  comparaciones = ordenamiento_cubeta(vector_ent,n,vector_sal);
  printf("Vector ordenado : ");
  for(i = 0; i<20; i++){
    if(vector_sal[i] !=0){
      printf(" %4d", i);
    }
  } 
  printf("\nEl numero de comparaciones es %d ", comparaciones);
}

int ordenamiento_cubeta(int ent[], int k, int sal[]){
  int j;
  for(j = 0; j<=20; j++){
    sal[j] = 0;
    
  }
  for(j=0; j<k; j++){
    sal[ent[j]] = 1;
  }
  return k;
}

