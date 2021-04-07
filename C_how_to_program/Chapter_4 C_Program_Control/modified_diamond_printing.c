#include <stdio.h>
int main()
{	int value;
	puts("enter a value for diamond printing ");
	scanf("%d" ,&value);
	for( int i = 1; i <= value; ++i)
	{	for(int j = value ; j >= 1 ;j--)
		{	if( j <= i)
			{	printf("*");
			}
			else
			{	printf(" ");
			}
		}
		
		for(int p = 1 ; p < i ; p++)
		{	printf("*");
		}
		printf("\n");
		
		}
		printf(" ");
		for(int i = 1; i <= value - 1; ++i)
		{	for( int j = 1; j <= value - 1; j++)
			{	if(j >= i)
				printf("*");
				else 
				printf(" ");
			}
			for(int p = 1; p <= value-1-i ; ++p)
			{	printf("*");
			}
			printf("\n");
			printf(" ");
		}
		
	}
	

