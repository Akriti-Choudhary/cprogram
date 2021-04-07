#include <stdio.h>
int main()
{
	for( int i = 1; i <= 5; ++i)
	{	for(int j = 5 ; j >= 1 ;j--)
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
		for(int i = 1; i <= 4; ++i)
		{	for( int j = 1; j <= 4 ; j++)
			{	if(j >= i)
				printf("*");
				else 
				printf(" ");
			}
			for(int p = 1; p <= 4-i ; ++p)
			{	printf("*");
			}
			printf("\n");
			printf(" ");
		}
		
	}
	

