// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){
    float vt[N];
    float *pvt; 
    srand(time(NULL));
    for(int i = 0; i<N ; i++)
    {
        vt[i]=1+rand()%100;
        printf("-Valor %d: %.2f \n",i+1, vt[i]);
    }
    pvt = vt;
    for (int j = 0; j < N; j++)
    {
        printf("-Valor %d: %.2f \n",j+1, *pvt);
        pvt++;
    }
    
    return 0;
}