#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "mezcla.c"

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
    printf("Arreglo inicial: ");
    for (int i=0; i<N; i++)
    {
        a[i] = rand() % 11;
    }
        
}

void imprimirArreglo (int *a)
{
    for(int i=0; i<N; i++)
    {
        printf("%d, ", * a+i);
    }
}


