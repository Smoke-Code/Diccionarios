#include <stdio.h>

int main() {
    char nombre[256];
    int edad;
    char sexo;
    // podemos obtener cualquier dato
    scanf("%s %d %c", nombre, &edad, &sexo);

    printf("Nombre: %s\nEdad: %d\nSexo: %c\n", nombre, edad, sexo);

    return 0;
}
