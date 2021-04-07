#include <stdio.h>
int isPositive( int num);
int main()
{	int num;
	for(int i = 1; ; i++)
	{	puts("enter a series of number and press -1 to exit");
		scanf("%d" ,&num);
		printf("%d" ,isPositive( num));
		
		if(num == -1)		//check for end of the series
		{	
			break;
		}
		
		puts(" ");
	}
}	

int isPositive( int num)
{	if ( num > 0)
	{	return 1;	//check for positive number
	}
	else
	return 0;		//check for negative number
}
