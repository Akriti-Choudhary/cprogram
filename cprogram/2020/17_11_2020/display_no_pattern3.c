#include <stdio.h>
int main()
{	/* display
		1
		121
		12321
		1234321
	*/
	int i,j;
	for(i=1;i<=4;i++)
	{	for(j=1;j<=i;j++)
		{	printf("%d" ,j);
		}
		for(j=i-1;j>=1;j--)
		{	printf("%d" ,j);
		}
		printf("\n");
	}
	}
