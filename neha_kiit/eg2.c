#include <stdio.h>
int main()
{	/* print the format
	   A
	   B A
	   C B A
	   D C B A
	   E D C B A */
	
	int var = 65,count=0;
	for(int i =0; i<=4;i++)
	{	for(int j = 4; j>=4-i;j--)
		{	printf("%c " ,var-count);
			count++;
		}
		printf("\n");
		count = 0;
		var++;
	}
	return 0;
}
		
