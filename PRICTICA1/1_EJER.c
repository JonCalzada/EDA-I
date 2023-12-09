#include <stdio.h>
#define s scanf
#define p printf

char car[250];
int i;
main (void){
p("\nIngrese la cadena \n");
for (i=0;i<250;i++)
{
    s("%[^\n]", car);
   for (i=0;i<250;i++){
    if (car[i]==car[0])
        car[i]-=32;
        if (car[i]==32)
        car[i+1]-=32;

}
p("\n%s\n",car);

}
}
