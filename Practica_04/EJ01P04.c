// EJ01P04.c
// Memoria dinamica
#include<stdio.h>
#include<stdlib.h>
int *crearConjunto(int tam);
void asignarValores(int *conjunto,int tam);
void imprimeValores(int *conjunto,int tam);
long promediarValores(int *conjunto,int tam);

void liberar(int *conjunto);

int main()
{
    int tam = 0;
    int *arr=NULL;

    printf("Escribe la longitud del conjunto: ");
    scanf("%d",&tam);

    arr = crearConjunto(tam);
    asignarValores(arr,tam);
    imprimeValores(arr,tam);

    printf("promedio= %ld \n",promediarValores(arr,tam));

    return 0;
}

int *crearConjunto(int tam)
{
    // Crear el espacio necesario en memoria
    // dinamica para almacenar los datos
}

void asignarValores(int *conjunto,int tam)
{
  // Asignar un valor aleatorio en
  // cada elemento del conjunto
}

void imprimeValores(int *conjunto,int tam)
{
    int i=0;
    for(i=0; i<tam; i++)
    {   // utilizando notación de arreglos
        // printf("%d \n",conjunto[i]);
        // o bien, usando el apuntador
        printf("%d \n", *(conjunto+i));
    }
}

long promediarValores(int *conjunto,int tam)
{
//  Calcular el valor promedio del conjunto de datos
}

void liberar(int *conjunto)
{
// Liberar el espacio en memoria del conjunto
}
