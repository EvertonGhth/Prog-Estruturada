#include<stdio.h>
int main ()
{
	int i;
	for(i=1;(i/32)==0;i=i*2)
	printf("%d",i);
}
