#include <stdio.h>
int main()
{	int i,j;
	for(i=4;i>=1;i--)
	{	for(j=1;j<=i;j++)
		{	if(i==j)
			{	printf(" 1");
			}
			else
			printf("  ");
		}
		for(j=i+1;j<=4;j++)
		{	if(j==i+2)
			{	printf(" 1");
			}
			else
			printf("  ");
		}
		for(j=4;j>=2;j--)
		{	if((j==i+1) || (j==i+3))
			{	printf(" 1");
			}
			else 
			{	printf("  ");
			}		
		}
		printf("\n");
	}
	return 0;
}		
			
