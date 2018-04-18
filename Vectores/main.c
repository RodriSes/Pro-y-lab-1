#include <stdio.h>
#include <stdlib.h>
//#define TAM 5

void ordenar(int [],int, int);
void mostrarVector(int [], int);

int main()
{
    int TAM =5;
    int numeros[]={34,14,23,12,7};

    ordenar(numeros,TAM,1);
    mostrarVector(numeros,TAM);

    return 0;
}

void ordenar(int numeros[],int TAM, int criterio)
{
    int i,j,auxiliar;

    for(i=0;i<TAM-1;i++)
    {
        for(j=i+1;j<TAM;j++)
        {

            if(numeros[i]>numeros[j] && criterio == 1)
            {
                auxiliar = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = auxiliar;

            }
             if(numeros[i]<numeros[j] && criterio == 0 )
            {
                auxiliar = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = auxiliar;

            }




    }
}
}
void mostrarVector(int numeros[], int TAM)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("%d\t",numeros[i]);
    }
}
