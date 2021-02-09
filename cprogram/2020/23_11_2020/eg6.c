#include <stdio.h>
int main()
{	puts("enter an even size for the array");
	int a;
	scanf("%d" ,&a);
	int x[a],temp=0,i;
	puts("enter the elements of tah array");
	for(i=0;i<a;i++)
	{	scanf("%d" ,&x[i]);
	}
	for(i=0;i<a/2;i++)
	{	temp=x[i];
		x[i]=x[a-i-1];
		x[a-i-1]=temp;
	}
	for(i=0;i<a;i++)
	{	printf(" %d" ,x[i]);
	}
	return 0;
}
