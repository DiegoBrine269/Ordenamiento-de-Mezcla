#include "mezcla.h"
#include <stdio.h>  
#include <stdlib.h>  

void mezcla(int arr[], int l, int m, int r)  
{  
    int i, j, k;  
    int n1 = m - l + 1;  
    int n2 = r - m;  
  
    //Arreglos temporales
    //L arreglo a la mitad de la izquierda, R derecha
    int L[n1], R[n2];  
  
    //Copiamos los datos a los arreglos temporales, izquierda y derecha respectivamente
    for (i = 0; i < n1; i++)  
        L[i] = arr[l + i];  
    for (j = 0; j < n2; j++)  
        R[j] = arr[m + 1 + j];  
  

    i = 0; // Índice inicial del primer subarreglo  
    j = 0; // Índice inicial del segundo subarreglo
    k = l; // Índice inicial del subarreglo combinado  

    while (i < n1 && j < n2) {  
        if (L[i] <= R[j]) {  
            arr[k] = L[i];  
            i++;  
        }  
        else {  
            arr[k] = R[j];  
            j++;  
        }  
        k++;  
    }  
  
    //este bucle copia los elementos que aún queden en L
    while (i < n1) {  
        arr[k] = L[i];  
        i++;  
        k++;  
    }  
  
    //este bucle copia los elementos que aún queden en R
    while (j < n2) {  
        arr[k] = R[j];  
        j++;  
        k++;  
    }  
}  

void ordenamientoMezcla(int arr[], int l, int r)  
{  
    if (l < r) {  

        int m = l + (r - l) / 2;  
  
        // Dividimos en mitades
        ordenamientoMezcla(arr, l, m);  
        ordenamientoMezcla(arr, m + 1, r);  
  
        mezcla(arr, l, m, r);  
    }  
}

void imprimirArreglo(int A[], int tamano)  
{  
    int i;  
    for (i = 0; i < tamano; i++)  
        printf("%d ", A[i]);  
    printf("\n");  
}  