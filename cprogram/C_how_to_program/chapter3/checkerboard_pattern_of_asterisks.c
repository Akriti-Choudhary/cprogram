#include <stdio.h>
int main()
{	
	for(int i =1;i <= 8; i+=2)
	{	for(int j =1;j <= 8; j++)
		{	printf("* "); 
		}
		printf("\n");
		for(int k =1;k <= 8; k++)
		{	printf(" *"); 
		}
		printf("\n");
	}
	return 0;
}
