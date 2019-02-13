#include<stdio.h>
#include <locale.h>
int main()
{
int fat,i,n;
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf("Forneça um número inteiro não negativo\n");
scanf("%d",&n);
i=n;
fat=1;
while (i>1)
{
fat*=i;// fat=fat*i
i-=1;//
}
printf ("O fatorial de %d é %d",n,fat);
}

