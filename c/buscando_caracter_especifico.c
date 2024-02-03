// strcmp() y strncmp()
// buscar un caracter especifico detnro de una cadena de caracteres.  
// sensible a mayusuculas y minusculas 
#include <stdio.h>
#include <string.h>

int main(){
  int posicion;
  char oracion[] = "Hola aqui en el mundo nuevo";
  char *buscador;
  buscador = strchr(oracion, 'e');
  if(buscador != NULL){
    printf("Encontre la letra en la posicion %ld ", buscador-oracion);
    
  }else{
    printf("No encontre ninguna letra parecida " );
  }
  
  return 0; 
}

