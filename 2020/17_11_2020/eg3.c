#include <stdio.h>
int main()
{	/* display
	       *
	      **
	     ***
	    ****
	   *****
	   */
	
	
	
	int i,j;
	for(i=1;i<=5;i++)
	{	for(j=5-i;j>=1;j--)
		{	printf(" ");
		}
		for(j=i;j>=1;j--)
		{	printf("*");
		}
	printf("\n");
	}
	return 0;
}
