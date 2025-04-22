#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct 
{
    int velocidad;      // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;           // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;     // Tipo de procesador (apuntador a cadena de caracteres)
} compu;

int main(){
    srand(time(NULL));

    // Arreglo de tipos de CPU disponibles
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
    compu pcs[5];

    for (int i = 0; i < 5; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 2024;
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
    

    return 0;
}