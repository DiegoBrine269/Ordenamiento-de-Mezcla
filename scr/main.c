#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "mezcla.h"

//variables globales
#define N 10
int arreglo [N];

/*Prototipos*/
void inicializarValores(int *a);
void imprimirArreglo (int *a);

int main ()
{
    inicializarValores(arreglo);
    imprimirArreglo(arreglo);
    ordenamientoPorMezcla(arreglo);
    imprimirArreglo(arreglo);
    
    getch();

    return 0;
}

void inicializarValores (int *a)
{
    
    for (int i=0; i<N; i++)
    {
        if(i % 2 == 0)
            a[i] = rand() % 11+5;
        else
            a[i] = rand() % 11-5;
    }
        
}

void imprimirArreglo (int *a)
{
    printf("\nArreglo: ");
    for(int i=0; i<N; i++)
    {
        printf("%d, ", * a+i);
    }
}


