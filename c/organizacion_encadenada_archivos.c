// Tecnica usada por los SO para el almacenamiento y recuperacion eficaz de
// archivos Se basa en una estructura de datos denominada tabla de asignacion de
// archivos(FAT) se almacena en una zona especial del disco
// => Sector libre
// => Sector asignado
// => Sector defectuoso
// => Sector final del archivo
//

// si la asigacion es de valor diferente a cero, indica que esta asignado
// el valor99 indica que se trata del ultimo ector del archivo
// si la asignacion es cero, corresponden a sectores libres
#include <stdio.h>

void enlaces(int cp);
void sectores_libres(void);

int fat[64] = {0, 0,  99, 54, 5, 6, 38, 24, 0,  10, 49, 15, 59, 0,  12, 0,
               0, 99, 0,  0,  2, 0, 44, 0,  29, 0,  11, 0,  0,  3,  0,  0,
               4, 17, 0,  99, 0, 0, 39, 9,  0,  0,  6,  0,  45, 46, 26, 0,
               0, 33, 0,  0,  0, 0, 55, 56, 57, 99, 0,  0,  61, 20, 0,  0};

  
int main(){ 
  int cadena[] = {7,32,60,14};
  int i;

  for(i=0; i<4; i++){
    printf("Cadena enlazada del archivo #%d :\n", i+1);
    enlaces(cadena[i]);
  }
  printf("\n");
  sectores_libres();
}

void enlaces(int cp){
  do{
    printf("%d\t", cp);
    if((cp != 0) && (cp != 99)){
      cp = fat[cp];
      
    }
  }while((cp != 0) && (cp != 99));
  if(cp == 0){
    printf("?\nError! cadena perdida");
  }
  printf("\n");
}

void sectores_libres(void){
  int j, libres = 0;
  for(j = 1; j<64; j++){
    if(fat[j] == 0){
      libres++;
    }
  }
  printf("Hay %d unidades libres de asignacion", libres);
}
