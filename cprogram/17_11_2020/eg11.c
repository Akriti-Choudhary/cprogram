#include <stdio.h>
int main()
{	int i,j,c=1;
	for(i=1;i<=4;i++)
	{	for(j=1;j<=4-i;j++)
		{	printf(" ");
		}
		for(j=1;j<=i;j++)
		{	printf("%d" ,c);
			printf(" ");
			c++;
		}
	printf("\n");
	c=1;
	}
	return 0;
}	
