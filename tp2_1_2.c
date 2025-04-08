#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){

    int i;
    double vt[N], *pvt;
    srand(time(NULL));

    // Cargar los valores
    for (i = 0; i < N; i++) {
        vt[i] = 1 + rand() % 100;
    }

    // Mostrar usando puntero (avanzando pvt) y contador i
    pvt = vt;
    for(i = 0; i < N; i++, pvt++) {
        printf("-Valor %d: %.2f \n", i + 1, *pvt);
    }

    return 0;
}
