#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char dato;
    struct nodo* enlace;
} Lista;

void mostrar_lista(Lista* ptr);
void insertar_principio(Lista** ptr, char item);
void insertar_final(Lista** ptr, char item);

int main() {
    Lista* n1, * n2, * n3;
    n1 = malloc(sizeof(Lista));
    n2 = malloc(sizeof(Lista));
    n3 = malloc(sizeof(Lista));

    n1->dato = 'c';
    n1->enlace = n2;

    n2->dato = 'a';
    n2->enlace = n3;

    n3->dato = 't';
    n3->enlace = NULL;

    printf("La lista enlazada es como sigue: \n");
    mostrar_lista(n1);

    insertar_principio(&n1, 's');
    printf("La nueva lista enlazada es: \n");
    mostrar_lista(n1);

    insertar_final(&n1, 'm');
    printf("La nueva lista enlazada es: \n");
    mostrar_lista(n1);

    free(n1);
    free(n2);
    free(n3);

    return 0;
}

void mostrar_lista(Lista* ptr) {
    while (ptr != NULL) {
        printf(" %c\n", ptr->dato);
        ptr = ptr->enlace;
    }
    printf("\n");
}

void insertar_principio(Lista** ptr, char item) {
    Lista* new = malloc(sizeof(Lista));
    if (new != NULL) {
        new->dato = item;
        new->enlace = *ptr;
        *ptr = new;
    }
}

void insertar_final(Lista** ptr, char item) {
    Lista* new = malloc(sizeof(Lista));
    Lista* temp = *ptr;

    if (new != NULL) {
        new->dato = item;
        new->enlace = NULL;

        if (*ptr == NULL) {
            *ptr = new; 
        } else {
            while (temp->enlace != NULL) {
                temp = temp->enlace;
            }
            temp->enlace = new;
        }
    }
}
