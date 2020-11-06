#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "mezcla.h"

//variables globales
#define N 10
int arreglo [10] = {6, 8, 3, 6, 4, 5, 9, 4, 7, 3};


/*Prototipos*/

int main ()
{
    srand (time(NULL));

    imprimirArreglo(arreglo, N);
    //mezcla(arreglo, 1, 2, 6);
    getch();

    return 0;
}





