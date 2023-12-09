#include <stdio.h>
#include<stdlib.h>
#define s scanf
#define p printf

char vec1[10],vec2[10];
int i,sum,sum2;
main (void){
p("\nIngrese la cadena \n");
for (i=0;i<10;i++)
{
    s("%[^\n]",vec1);
}
system("pause");
p("\nIngrese la cadena \n");
for (i=0;i<10;i++)
{
    s("%[^\n]",vec2);
}
for (i=0;i<10;i++){
sum=vec1[3]+vec1[4];
sum2=vec2[3]+vec2[4];
sum-=48;
sum2-=48;
}

p("\n%s\n",vec1);
p("\n %c %c\n",sum,sum2);

}

