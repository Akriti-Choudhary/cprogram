#include <stdio.h>
int main()
{	int a,b,c,d,e,f,g;
	printf("enter four nos. ");
	scanf("%d%d%d%d" ,&a,&b,&c,&d);
	e = (a<b)?a:b;
	f = (c<d)?c:d;
	g = (e<f)?e:f;
	
	printf("\n %d" ,g);
} 
