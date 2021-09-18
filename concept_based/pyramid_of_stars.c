/*
if input = 4 
print:
   *
  ***
 *****
*******
*/
#include <stdio.h>
int main()
{	int n;	
	puts("enter the limit");
	scanf("%d" ,&n);
	for(int i = 1; i <= n ;++i)
	{	for(int j = 1; j <= 2*n-1 ;++j)
		{	if( (j >= n-(i-1)) && (j <= n+(i-1)))
			{
				printf("*");
			}
			else
			printf(" ");
		}
		puts(" ");
	}

	return 0;
}
