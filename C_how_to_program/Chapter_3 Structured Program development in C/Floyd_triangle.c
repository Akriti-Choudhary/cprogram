#include <stdio.h>
int main()
{	int counter=1;
	puts("Floyd's triangle");
 	for(unsigned int i=1;i<=10;i++)
	{	for(unsigned int j=1;j<=i;j++)
	  	{	printf(" %d" ,counter);
	  		counter++;
	  	}
	  	printf("\n");
	}
	return 0;
}  
