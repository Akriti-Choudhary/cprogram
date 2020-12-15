#include <stdio.h>
int main()
{	puts("enter an even size for the array");
	int a;
	scanf("%d" ,&a);
	int x[a],i;
	puts("enter the elements of the array");
	for(i=0;i<a;i++)
	{	scanf("%d" ,&x[i]);
	}
	int max=x[0], min=x[0];
	for(i=1;i<a;i++)
	{	if(x[i]>max)
		{	max =x[i];
		}
		if(x[i]<min)
		{	min = x[i];
		}
	}
	printf("maximum = %d \n" ,max);
	printf(" minimum = %d" ,min);
	
	return 0;
}
