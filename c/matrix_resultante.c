#include <stdio.h>

int main(){
  int matriz_a[2][3] = {{1, -2, 3}, 
                        {2, 3, -1}};
  
  int matriz_b[3][2] = {{2, 1},
                        {1, 3}, 
                        {-3, 2}};
  int matriz_c[2][2];
  
  int f,c,v,sum;

  for(f = 0; f<2; f++){
    for (c = 0; c<2; c++){
      sum = 0;
      for(v = 0; v<3; v++){
        sum += matriz_a[f][v] * matriz_b[v][c];
        matriz_c[f][c] = sum;
        
      }
    }    
  }
  printf("La matriz producto es : \n");
  for(f = 0; f<2; f++){
    for(c = 0; c < 2; c++){
      
      printf("%5d", matriz_c[f][c]);
      
    }
    printf("\n");
  }
}
