#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "mezcla.h"

int main()  
{  
    int arreglo[] = {6, 8, 3, 6, 4, 5, 9, 4, 7, 3};  //declaramos e inicializamos el arreglo
    int tamanoArreglo = sizeof(arreglo) / sizeof(arreglo[0]);  //guardamos el tamaño del arreglo
  
    printf("Arreglo inicial: \n");  
    imprimirArreglo(arreglo, tamanoArreglo);  
  
    ordenamientoMezcla(arreglo, 0, tamanoArreglo - 1);  
  
    printf("\nArreglo ordenado: \n");  
    imprimirArreglo(arreglo, tamanoArreglo);  
    return 0;  
}  




