#include <stdio.h>
int main()
{	int i,j;
	for(i=1;i<=4;i++)
	{	for(j=4-i;j>=1;j--)
		{	printf(" ");
		}
		for(j=1;j<=i;j++)
		{	printf("1");
			printf(" ");
		}
		printf("\n");
	}
	for(i=3; i>=1;i--)
	{	for(j=4-i;j>=1;j--)
		{	printf(" ");
		}
		for(j=1;j<=i;j++)
		{	printf("1");
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
