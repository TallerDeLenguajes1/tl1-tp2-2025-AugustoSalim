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

void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);
void mostrarMasVeloz(compu pcs[], int cantidad);

int main(){
    srand(time(NULL));

    // Arreglo de tipos de CPU disponibles
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
    compu pcs[5];

    for (int i = 0; i < 5; i++)
    {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 10;
        pcs[i].cantidad_nucleos = 1 + rand() % 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
    
    listarPCs(pcs, 5);
    mostrarMasVieja(pcs, 5);
    mostrarMasVeloz(pcs, 5);

    return 0;
}

void listarPCs(compu pcs[], int cantidad){
    printf("\n--- LISTADO DE PCs ---\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("\nPC N# %d\n", i+1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("Anio: %d\n", pcs[i].anio);
        printf("Cantidad de Nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
    }
}

void mostrarMasVieja(compu pcs [], int cantidad){
    int menor = 3000, indice = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < menor)
        {
            menor = pcs[i].anio;
            indice = i;
        }
    }
    printf("\nLa pc mas vieja fue:\n");
    printf("\nPC N# %d\n", indice+1);
    printf("Velocidad: %d GHz\n", pcs[indice].velocidad);
    printf("Anio: %d\n", pcs[indice].anio);
    printf("Cantidad de Nucleos: %d\n", pcs[indice].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", pcs[indice].tipo_cpu);
}

void mostrarMasVeloz(compu pcs [], int cantidad){
    int mayor = 0, indice = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio > mayor)
        {
            mayor = pcs[i].anio;
            indice = i;
        }
    }
    printf("\nLa pc mas veloz fue:\n");
    printf("\nPC N# %d\n", indice+1);
    printf("Velocidad: %d GHz\n", pcs[indice].velocidad);
    printf("Anio: %d\n", pcs[indice].anio);
    printf("Cantidad de Nucleos: %d\n", pcs[indice].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", pcs[indice].tipo_cpu);
}