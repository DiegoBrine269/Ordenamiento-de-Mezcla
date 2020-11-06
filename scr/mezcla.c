#include "mezcla.h"
#include <stdio.h>  
#include <stdlib.h>  

/*Este método es recursivo y se ejecuta cada que el arreglo se divide a la mitad*/
void mezcla (int arregloCompleto[], int l, int m, int r)
{
    int i=0, j=0, k=0;
    int n1 = m - l + 1;
    int n2 = r - m;

    //arreglos temporales
    int L[n1], R[n2]; //L = mitad izquierda, R = mitad derecha

    //Copiamos datos a arreglos temporales 
    for(i=0; i<n1; i++)
    {
       L[i] = arregloCompleto[l+1]; 
    }
    
    for(j=0; j<n2; j++)
    {
        R[j] = arregloCompleto[m+1+j];
    }
    
    i=0, j=0, k=l;
    //i es el index para el primer subarreglo
    //j es el index para el segundo subarreglo
    //k es el index para el subarreglo combinado

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arregloCompleto[k] = L[i];
            i++;
        }
        else
        {
            arregloCompleto[k] = R[j];
            j++;
        }
        k++;
    }

    //este ciclo copia los elementos que queden en L
    while(i<n1)
    {
        arregloCompleto[k] = L[i];
        i++;
        k++;
    }

    //este ciclo copia los elementos que queden en R
    while(i<n2)
    {
        arregloCompleto[k] = R[j];
        j++;
        k++;
    }
}

void ordenamientoPorMezcla(int arregloCompleto[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-1)/2;

        ordenamientoPorMezcla(arregloCompleto, l, m);
        ordenamientoPorMezcla(arregloCompleto, m+1, r);

        mezcla(arregloCompleto, l, m, r);

    }
}

void imprimirArreglo (int a[], int tamano)
{
    printf("\nArreglo: ");
    for(int i=0; i<tamano; i++)
    {
        printf("%d, ", a[i]);
    }
}


