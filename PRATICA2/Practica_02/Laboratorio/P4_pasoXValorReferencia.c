#include<stdio.h>

/*
    Se ejemplifica el paso de variables por valor y por referencia.
*/

void pasarValor(int);
void pasarReferencia(int *);

int main(){
    int nums[] = {55,44,33,22,11};
    int *ap, cont;
    ap = nums;
    //printf("&ap %p, ap %p \n",&ap,ap);
    printf("Pasar valor: %d\n", *ap);
    pasarValor(*ap);
    printf("Pasar referencia: %d\n", *ap);
    pasarReferencia(ap);
    printf("Valor final: %d\n", *ap);
    return 0;
}

void pasarValor(int equis){
    printf("%d\n", equis);
    equis = 128;
    printf("%d\n", equis);
}

void pasarReferencia(int *equis){
    //printf("&equis %p , equis %p \n",&equis,equis);
    printf("%d\n", *equis);
    *equis = 128;
    printf("%d\n", *equis);
}
