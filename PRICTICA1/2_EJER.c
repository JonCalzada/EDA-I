#include <stdio.h>
#include<stdlib.h>
#define s scanf
#define p printf

char vec1[11],vec2[11];
int i,sum,sum2,cont=1;
main (void){
p("\nIngrese la fecha \n");
    fflush(stdin);
    s("%[^\n]",vec1);

p("\nIngrese la fecha \n");
    fflush(stdin);
    s("%[^\n]",vec2);


sum=vec1[3]+vec1[4];
sum2=vec2[3]+vec2[4];
sum-=48;
sum2-=48;
/*
    if(sum<13){
   switch (sum){
   case '1':
       p("Fecha 1: %i de Enero de %i\n",vec1,sum);
   break ;
    case '2':
         p("Fecha 1: %i de Feb de %i\n",vec1,sum);
   break;
   case '3':
        p("Fecha 1: %i de Marzo de %i\n",vec1,sum);
   break;
   case '4':
        p("Fecha 1: %i de Abril de %i\n",vec1,sum);
   break;
   case '5':
        p("Fecha 1: %i de Mayo de %i\n",vec1,sum);
   break;
   case '6':
        p("Fecha 1: %i de Junio de %i\n",vec1,sum);
   break;
   case '7':
        p("Fecha 1: %i de Julio de %i\n",vec1,sum);
   break;
   case '8':
        p("Fecha 1: %i de Agosto de %i\n",vec1,sum);
   break;
   case '9':
        p("Fecha 1: %i de Septiembre de %i\n",vec1,sum);
   break;
   case '10':
        p("Fecha 1: %i de Octubre de %i\n",vec1,sum);
   break;
   case '11':
        p("Fecha 1: %i de Noviembre de %i\n",vec1,sum);
   break;
   case 12:
        p("Fecha 1: %i de Dicembre de %i\n",vec1,sum);
 break;

  }}
if(sum2<13){
   switch (sum2){
   case '1':
       p("Fecha 1: %i de Enero de %i\n",vec2,sum);
   break ;
    case '2':
         p("Fecha 1: %i de Feb de %i\n",vec2,sum);
   break;
   case '3':
        p("Fecha 1: %i de Marzo de %i\n",vec2,sum);
   break;
   case '4':
        p("Fecha 1: %i de Abril de %i\n",vec2,sum);
   break;
   case '5':
        p("Fecha 1: %i de Mayo de %i\n",vec2,sum);
   break;
   case '6':
        p("Fecha 1: %i de Junio de %i\n",vec2,sum);
   break;
   case '7':
        p("Fecha 1: %i de Julio de %i\n",vec2,sum);
   break;
   case '8':
        p("Fecha 1: %i de Agosto de %i\n",vec2,sum);
   break;
   case '9':
        p("Fecha 1: %i de Septiembre de %i\n",vec2,sum);
   break;
   case '10':
        p("Fecha 1: %i de Octubre de %i\n",vec2,sum);
   break;
   case '11':
        p("Fecha 1: %i de Noviembre de %i\n",vec2,sum);
   break;
   case 12:
        p("Fecha 1: %i de Dicembre de %i\n",vec2,sum);
 break;

  }}*/
   p("\n%s\n",vec1);
 p("\n %c %c\n",sum,sum2);
p("Fecha 1: %i de Dicembre de %i\n",vec2,sum);
}

