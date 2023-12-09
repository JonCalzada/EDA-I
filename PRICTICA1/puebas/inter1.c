#include <stdio.h>
#include <stdlib.h>

main()
{

int i=0;
char texto[999];

printf("Ingrese una cadena de caracteres en minuscula: ");
scanf("%s",texto);

while(texto[i]!='\0')
{
texto[i]-=32;
printf("%c",texto[i]);
i++;
}

system("pause");

}
