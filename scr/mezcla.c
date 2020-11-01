#include "mezcla.h"

/*Este método es recursivo y se ejecuta cada que el arreglo se divide a la mitad*/
void ordenamientoPorMezcla(int *arregloCompleto)
{
    int i=0, j=0, k=0;
    if(sizeof arregloCompleto > 1)
    {
        int mitad = (sizeof arregloCompleto)/2;
        int mitadIzq [mitad];
        int mitadDer [mitad];
        inicializarMitad(mitadIzq, arregloCompleto, 0, mitad-1);
        inicializarMitad(mitadDer, arregloCompleto, mitad, sizeof arregloCompleto);

        ordenamientoPorMezcla(mitadIzq);
        ordenamientoPorMezcla(mitadDer);

        while((i<sizeof mitadIzq) && (j < sizeof mitadDer))
        {
            if(mitadIzq[i] < mitadDer [j])
            {
                arregloCompleto[k] = mitadIzq[j];
                i++;
            }
            else
            {
                arregloCompleto[k] = mitadDer[j];
            }
            k++;
        }

        while(i<sizeof mitadIzq)
        {
            arregloCompleto [k] = mitadIzq[i];
            i++;
            k++;
        }

        while (j<sizeof mitadDer)
        {
            arregloCompleto[k] = mitadDer[j];
            j++;
            k++;
        }
    }
}

/*Este método inicializa al arreglo partido*/
void inicializarMitad(int *arregloMitad, int *arregloOriginal, int inicio, int fin)
{
    for(int i=inicio; i<fin; i++)
    {
        arregloMitad[i] = arregloOriginal[i+inicio];
    }
}

