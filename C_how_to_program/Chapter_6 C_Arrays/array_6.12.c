#include <stdio.h>
int main()
{
	float arr[10];
	int stock[20] = {0};
	double sales[9];
	puts("enter 10 elements in an array");
	for(int i = 0; i < 10 ; ++i)
	{	scanf("%f" ,&arr[i]);
	}
	puts("elements of array after addition");
	for(int i = 0; i < 10 ; ++i)
	{	printf("%.2f " ,arr[i] + 2500);
	}
	puts(" ");
	
	puts("elements of array stock initialized to zero ");
	for(int i = 0; i < 20 ; ++i)
	{	printf("%d " ,stock[i]);
	}
	puts(" ");
	
	puts("enter 9 elements in sales array");
	for(int i = 0; i < 9 ; ++i)
	{	scanf("%lf" ,&sales[i]);
	}
	puts("elements of array sales in column form");
	for(int i = 0; i < 9 ; ++i)
	{	printf("%.2lf \n" ,sales[i]);
	}
	puts(" ");
	
	return 0;
}
	
