#include <stdio.h>
int pattern(int num1);
int main()
{	int a;
	puts("enter an integer");
	scanf("%d" ,&a);
	pattern(a);
	return 0;
}
int pattern(int num1)
{	int i;
	for(i = num1; i>=1; i--)
	{	for(int j = 1 ; j<=i ;j++)
		{	printf("*");
		}
		printf("\n");
	}
	return 1;
}
