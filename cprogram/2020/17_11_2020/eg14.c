#include <stdio.h>
int main()
{	int i,j,coef=1;
	for(i=0;i<=5;i++)
	{	for(j=5-i;j>=0;j--)
		{	printf(" ");
		}
		for(j=0;j<=i;j++)
		{	if (j == 0 || i == 0)
            		coef = 1;
         		else
            		{coef = coef * (i - j + 1) / j;
         		printf("%4d", coef);
		}
		}
		printf("\n");
	}
	return 0;
}
