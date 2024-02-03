#include <stdio.h>

void ordenacion_rapida(int ent[], int a, int b, int sal[]);
void mostrar_vector(int ent[], int k);
int comparaciones = 0;

int main() {
  int entrada[20] = {6, 7, 5, 8, 4, 9, 3, 0, 2};
  int n = 9;
  int salida[20];

  printf("Vector no ordenado : ");
  mostrar_vector(entrada, n);
  ordenacion_rapida(entrada, 0, n - 1, salida);
  printf("Vector ordenado : ");
  mostrar_vector(salida, n);
  printf("\nEl numero de comparaciones es %d", comparaciones);
}

void mostrar_vector(int ent[], int k) {
  int i;
  for (i = 0; i < k; i++) {
    printf("%4d", ent[i]);
  }
  printf("\n");
}

void ordenacion_rapida(int ent[], int a, int b, int sal[]) {
  int pivote, i = 0, j = 0, k = 1, z = 0;
  int ent1[20], ent2[20];
  int sal1[20], sal2[20];

  if (b != -1) {
    if (a == b) {
      sal[0] = ent[a];
    }
    else if (1 == (b - a)) {
      if (ent[a] <= ent[b]) {
        sal[0] = ent[a];
        sal[1] = ent[b];

      } else {
        sal[0] = ent[b];
        sal[1] = ent[a];
      }
      comparaciones++;

    } else {
      pivote = ent[0];
      while (k <= b) {
        if (pivote > ent[k]) {
          ent1[i] = ent[k];
          i++;
        } else {
          ent2[j] = ent[k];
          j++;
        }
        k++;
        comparaciones++;
      }

      ordenacion_rapida(ent1, 0, i-1, sal1);
      ordenacion_rapida(ent2, 0, j-1, sal2);
      for (k = 0; k < i; k++) {
        sal[z] = sal1[k];
        z++;
      }
      sal[z] = pivote;
      z++;

      for (k = 0; k < j; k++) {
        sal[z] = sal2[k];
        z++;
      }
    }
  }
}
