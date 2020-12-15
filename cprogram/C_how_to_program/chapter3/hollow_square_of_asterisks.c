#include <stdio.h>
int main()
{	int size;
	puts("enter the size b/w 1 to 20");
	scanf("%d" ,&size);
	if( (size <= 20) && (size >=1) )
	{ 	for(unsigned int i=1;i<=size;i++)
	  	{	if((i==1)||(i== size ))
	  		{	for(unsigned int j=1;j<=size;j++)
	  			{	printf("*");
	  			}
	  		}
	  		else
	  		{	printf("*");
	  			for(unsigned int k=2;k<=size-1;k++)
	  			{	printf(" ");	
	  			}
	  			printf("*");
	  		}
	  		printf("\n");
	  	}
	}
	else
	{	puts("size out of range");
	}
	return 0;
}  
