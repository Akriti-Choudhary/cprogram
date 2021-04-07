#include <stdio.h>
int main()
{	/* display
	    1
	    11
	    111
	    1111
	    11111
	    */


	int i,j;
	for(i=1;i<=5;i++)
	{	for(j=1;j<=i;j++)
		{	printf("1");
		}
		printf("\n");
	}
	return 0;
}
