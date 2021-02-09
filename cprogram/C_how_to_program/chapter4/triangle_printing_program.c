#include <stdio.h>
int main()
{	// print the patterns
	int lim;
	puts("enter the limit");
	scanf("%d" ,&lim);
	int i , j;
	for(i =1 ; i <= lim; ++i)
	{	for( j= 1; j <= i ; j++)
		{	printf("*");
		}
		puts(" ");
	}
	puts(" ");
	puts(" ");
	for(i =lim ; i >= 1; i--)
	{	for( j= 1; j <= i ; j++)
		{	printf("*");
		}
		puts(" ");
	}
	puts(" ");
	puts(" ");
	for ( i = lim ; i >= 1; i--)
	{	for(j = lim ; j > i ; j--)
		{	printf(" ");
		}
		for( int k =1; k <= i ; k++)
		{	printf("*");
		}
		puts(" ");
	}
	puts(" ");
	puts(" ");
	for ( i = 1 ; i <= lim; i++)
	{	for(j = lim ; j > i ; j--)
		{	printf(" ");
		}
		for( int k =1; k <= i ; k++)
		{	printf("*");
		}
		puts(" ");
	}
	return 0;
}
