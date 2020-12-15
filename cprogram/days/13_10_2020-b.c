#include <stdio.h>
int main()
{	int a,b,c,d;
	printf("enter three nos. ");
	scanf("%d%d%d" ,&a,&b,&c);
	d = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\n %d" ,d);
} 
