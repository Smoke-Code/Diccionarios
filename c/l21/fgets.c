#include <stdio.h>
#include <ctype.h>

int main() {
    char buffer[256];
    int i;
    // haciendo uso del buffer y indicando el tamano
    fgets(buffer, sizeof(buffer), stdin);

    for (i = 0; buffer[i] != '\0'; i++) {
        buffer[i] = toupper(buffer[i]);
    }

    printf("La cadena en mayúsculas es: %s\n", buffer);

    return 0;
}
