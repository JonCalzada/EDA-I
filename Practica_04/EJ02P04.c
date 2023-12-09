// EJ02P04.c
// Memoria dinamica
#include <stdio.h>

char buffer[200];
int indice=0;

void cortarPalabras();

int main ( int argc, char **argv )
{
    cortarPalabras();
    return 0;
}

void cortarPalabras(){

    FILE *archivo;

    char caracter;

    int saltoPrev=0;

    archivo = fopen ( "historiaC.txt", "r" );

    while (feof(archivo) == 0)
    {
        caracter = fgetc(archivo);

        if( caracter==' '||caracter=='.'||caracter==','||
            caracter==';'||caracter==':'||caracter=='"'||
            caracter=='('||caracter==')'||caracter=='['||
            caracter==']'||caracter=='/'||caracter=='\\'||
            caracter=='\n'||caracter=='\r'||caracter=='_'||
            caracter==EOF)
        {
            if(saltoPrev!=1)
            {
                // Agregar al buffer de caracteres el fin de cadena
                buffer[indice]='\0';
                printf("%s",buffer);
                printf("\n");
                
                // Activar bandera de salto de linea previo
                saltoPrev=1;

                // Dejar el buffer como una cadena vacia
                indice=0;
                buffer[indice]='\0';

            }
        }
        else
        {
            // Agregar al arreglo "buffer" caracter por caracter
            // para formar la palabra sin los signos de puntuación, 
            // y el espacio
            //printf("%c",caracter);
            buffer[ indice++ ]= caracter;
            saltoPrev=0;
        }
    }

    fclose ( archivo );
}