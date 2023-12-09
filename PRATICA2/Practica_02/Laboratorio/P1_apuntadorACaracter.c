#include <stdio.h>

/*
    Este programa crea un apuntador de tipo car�cter.
*/

int main () {
    char *ap, c;
    c = 'x';
    ap = &c;
    
    // imprime el car�cter de la localidad a la que apunta
    printf("Car�cter: %c\n",*ap); 
    // imprime el c�digo ASCII de la localidad a la que apunta
    printf("C�digo ASCII: %d\n",*ap);
    // imprime la direcci�n de memoria de la localidad a la que apunta
    printf("Direcci�n de memoria: %d\n",ap);
     
    return 0;
}
