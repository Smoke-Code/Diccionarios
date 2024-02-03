#include <stdio.h>

int main(){
  int p,s,r, 
      temp; 
  int lista[3];
  printf("Digita el primer elemento : ");
  scanf(" %d", &p);
  printf("Digita el segundo elemento : ");
  scanf(" %d", &r);
  printf("Digita el tercer elemento : ");
  scanf(" %d", &s);
  
  if(p>s){
    temp = p;
    p = s;
    s = temp;
    
  }
  if(p>r){
    temp = r;
    p = r;
    r = temp;
  }
  if(s>r){
    temp = s;
    s = r;
    r = temp;
  }

  lista[0] = p;
  lista[1] = r;
  lista[2] = s;
  
 
  printf("Los numeros ordenados son : %d %d %d ", lista[0], lista[1], lista[2]);

  return 0;
}
