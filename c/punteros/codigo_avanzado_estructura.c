#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definicion de una estructura para un nodo de una lista enlazada

typedef struct Nodo{
  char nombre[50];
  int edad;
  struct Nodo *siguiente;
  
}Nodo;

// Funcion para insertar un nodo al final de una lista enlazada
void insertarNodo(Nodo **lista, char *nombre, int edad){
  Nodo *nuevoNodo = malloc(sizeof(Nodo));
  strcpy(nuevoNodo -> nombre, nombre);
  nuevoNodo->edad = edad;
  nuevoNodo->siguiente = NULL;
 
  if(*lista == NULL){
    *lista = nuevoNodo;
  }else{
    Nodo *actual = *lista;
    while(actual -> siguiente != NULL){
      actual = actual -> siguiente;
    }
    actual -> siguiente = nuevoNodo;
  }
} 


//Duncion para imprimir la informacion de una lista enlazada
void imprimirLista(Nodo *lista){
  while(lista != NULL){
    printf("Nombre : %s", lista->nombre);
    printf("Edad : %d", lista->edad);
    lista = lista->siguiente;
    
  }
}

// funcion principal

int main(){
  Nodo *lista = NULL;

  // insertar algunas nodos en la lista
  insertarNodo(&lista,"Juan", 20);
  insertarNodo(&lista,"George", 21);
  insertarNodo(&lista,"David", 22);
  
  // imprimir la lista 
  imprimirLista(lista);
  return 0;
  
}
