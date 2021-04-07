#include <stdio.h>
int main()
{	/* check for highest amount of rainfall and replace if the entered value is greater than 		the highest received rainfall */	
	int read_max,read;
	puts("enter the highest rainfall ever in one season for your country");
	scanf("%d" ,&read_max);
	printf("%dis the highest amt. of rainfall \n" ,read_max);
	puts("enter the amount of rainfall in the current year of your country");
	scanf("%d" ,&read);
	printf("%d is the  amount of rainfall  received in the current year\n" ,read);
	if( read > read_max)
	{	read_max=read;
		printf("%d is the highest amount of rainfall ever received \n" ,read_max);
	}
	return 0;
}
