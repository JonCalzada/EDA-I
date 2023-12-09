#include <stdio.h>

/*
    Este programa crea un apuntador de tipo entero
    que apunta al inicio de un arreglo.
*/

int main () {
    short arr[5], *apArr;
    apArr = &arr[0];
    // imprime la direcci�n de memoria del arreglo en la posici�n [0]
    printf("Direcci�n del arreglo en la primera posici�n: %x\n",&arr[0]);
    // imprime la direcci�n de memoria del arreglo
    // (el nombre del arreglo es un apuntador)
    printf("Direcci�n del arreglo: %x\n",&arr);
    // imprime la direcci�n de memoria del apuntador apArr
    printf("Direcci�n del apuntador: %x\n",apArr);

    return 0;
}
