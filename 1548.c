#include <stdio.h>
#include <stdlib.h>

int main() {
  int T, M, i, j, k, contador, nao_precisou;
  int notas[1005];
  int fila_original[1005];

  scanf("%d", &T);

  while (T--) {
    scanf("%d", &M);

    for (i = 0; i < M; i++) {
      scanf("%d", &notas[i]);
      fila_original[i] = notas[i];
    }

    for (i = 1; i < M; i++) {
      contador = notas[i];
      j = i - 1;

      while (j >= 0 && notas[j] < contador) {
        notas[j + 1] = notas[j];
        j--;
      }

      notas[j + 1] = contador;
    }

    nao_precisou = 0;
    for (i = 0; i < M; i++) {
      if (notas[i] == fila_original[i]) {
        nao_precisou++;
      }
    }

    printf("%d\n", nao_precisou);
  }

  return 0;
}