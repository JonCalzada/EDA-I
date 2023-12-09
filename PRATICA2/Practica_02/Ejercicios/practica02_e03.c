#include<stdio.h>
#include<string.h>

void crearArreglo();
void imprimeArreglo(int []);

int main()
{
   crearArreglo();

return 0;
}

void crearArreglo(){
    int n;
    printf("Escribe el numero de elementos: ");
    scanf("%d",&n);

    int arr[n];

    while(n>=0){
        arr[n]=n;
        printf("%d \n",arr[n]);
        n--;
    }

    printf("# de Bytes : %d\n",sizeof(arr));
    printf("# de elementos : %d\n",sizeof(arr)/sizeof(int));

    imprimeArreglo(arr);

}
void imprimeArreglo(int a[]){
    int i,n;

    printf("Funcion de impresion\n");

    n = sizeof(a)/sizeof(int);

    for(i=0;i<n;i++)
        printf(" %d \n",a[i]);
}
