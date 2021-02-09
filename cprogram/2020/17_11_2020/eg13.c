#include <stdio.h>
int main()
{	int i,j;
	for(i=1;i<=5;i++)
	{	if(i<=4)
		{	for(j=1;j<=i;j++)
			{	if((j==1)||(j==i))
				{	printf("*");
				}
				else
				{	printf(" ");
				}
			}
		}
		else
		{	for(j=1;j<=5;j++)
			{	printf("*");
			}
		}
			
		
		printf("\n");
		}
	
	return 0;
}
