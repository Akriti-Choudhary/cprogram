#include <stdio.h>
int main()
{	int size;
	puts("enter the size b/w 1 to 20");
	scanf("%d" ,&size);
	if( (size <= 20) && (size >=1) )
	{ 	for(unsigned int i=1;i<=size;i++)
	  	{	for(unsigned int j=1;j<=size;j++)
	  		{	printf("*");
	  		}
	  		printf("\n");
	  	}
	}
	else
	{	puts("size out of range");
	}
	return 0;
}  
