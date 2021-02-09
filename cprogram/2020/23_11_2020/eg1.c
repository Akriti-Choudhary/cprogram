#include <stdio.h>
int main()
{	/* print the array in forward and backward order */	
	int x[5],i;
	puts("enter the elements of the array");
	for(i=0;i< 5;i++)
	{	scanf("%d" ,&x[i]);
	}
	for(i=0;i< 5;i++)
	{	printf(" %d" ,x[i]);
	}
	printf("\n");
	for(i=4;i>=0;i--)
	{	printf(" %d" ,x[i]);
	}
	return 0;
}
