#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main() {
    int i, j, *pi;
    int mt[N][M];

    srand(time(NULL)); // Semilla para números aleatorios

    printf("\nCargo y muestro la matriz de manera normal:\n\n");

    // Cargar la matriz y mostrar con notación indexada
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            mt[i][j] = 1 + rand() % 100;
            printf("%d\t", mt[i][j]);
        }
        printf("\n");
    }

    printf("\nValores usando aritmética de punteros:\n\n");

    // Ahora recorrer usando punteros
    pi = &mt[0][0]; // Apunta al primer elemento de la matriz
    for(i = 0; i < N * M; i++, pi++) {
        printf("%d\t", *pi);
        if ((i + 1) % M == 0) printf("\n");
    }

    printf("\nValores usando aritmética de punteros con for i y for j:\n\n");
    // Mostrar la matriz usando aritmética de punteros
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            // Usamos aritmética de punteros: *(base + i * columnas + j)
            pi = &mt[0][0] + i * M + j;
            printf("%3d\t", *pi);
        }
        printf("\n");
    }

    return 0;
}
