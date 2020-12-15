#include <stdio.h>
int main()
{	int i,j,count=15;
	for(i=5;i>=1;i--)
	{	for(j=i;j>=1;j--)
		{	if(count>=10)
			{	printf(" %d" ,count);
				count--;
			}
			else
			{	printf("  %d" ,count);
				count--;
			}
		}
	printf("\n");
	}
	return 0;
}
