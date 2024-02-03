#include <stdio.h>

void ordenar_funcion(int ent[], int a, int b, int sal[]);
void mostrar(int ent[], int k);
void mezclar(int ent1[], int ent2[], int n1, int n2, int sal[]);

int comparaciones = 0;

int main() {
  int entrada[20] = {6, 7, 5, 8, 4, 9, 3, 0, 2};
  int n = 9;
  int salida[20];

  printf("Vector no ordenado: ");
  mostrar(entrada, n);
  ordenar_funcion(entrada, 0, n - 1, salida);
  printf("Vector ordenado : ");
  mostrar(salida, n);
  printf("\n El numero de comparaciones es %d ", comparaciones);
}

void mostrar(int ent[], int k) {
  int i;
  for (i = 0; i < k; i++) {
    printf(" %4d", ent[i]);
  }
  printf("\n");
}

void ordenar_funcion(int ent[], int a, int b, int sal[]) {
  int m;
  int sal1[20], sal2[20];
  // comprobar si el vector tiene solo un elemento
  if (a == b) {
    sal[0] = ent[a];  // devuelve el unico elemento
  // comprobar si el vector tinene dos elementos
  } else if (1 == (b - a)) {
    if (ent[a] <= ent[b]) { // no intercambiar los elementos
      sal[0] = ent[a];
      sal[1] = ent[b];

    } else { // intercambiar los elementos
      sal[0] = ent[b];
      sal[1] = ent[a];
    }
    comparaciones++;

  } else {
    // dividir el vector de tres o mas elementos
    m = a + (b - a) / 2; // calculo de la mitad
    ordenar_funcion(ent, a, m, sal1); // ordenar la primera mitad
    ordenar_funcion(ent, m + 1, b, sal2); // ordenar la segunda mitad
    //mezclar las dos mitades
    mezclar(sal1, sal2, 1 + m - a, b - m, sal);
  }
}

void mezclar(int ent1[], int ent2[], int n1, int n2, int sal[]) {
  int i = 0, j = 0, k = 0;
  // comprobar si el primer elemento del vector es el mas pequenok
  while ((i < n1) && (j < n2)) {
    if (ent1[i] <= ent2[j]) {
      sal[k] = ent1[i];
      i++;   // actualiza el indice
    } else { // el segundo es mas pequeno
      sal[k] = ent2[j];
      j++;  // actualiza el indice
    }
    k++; // actuaizar el indice de salida 
    comparaciones++;
  }

  if (i != n1) {
    do {  // escribir los elementos restantes de ent1 al vector de salida
      sal[k] = ent1[i];
      i++;
      k++;

    } while (i < n1);

  } else { // escribir los elementos restantes de ent2 al vectorde salida
    do {
      sal[k] = ent2[j];
      j++;
      k++;

    } while (j < n2);
  }
}
