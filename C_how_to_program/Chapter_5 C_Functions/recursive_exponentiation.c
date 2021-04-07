#include <stdio.h>
int power( int base , int exponent);
int main()
{	int base ;
	int exponent;
	puts("enter the base and exponent");
	scanf("%d%d" ,&base ,&exponent);
	printf("%d \n" ,power( base , exponent));
	
	return 0;
}
int power( int base , int exponent)
{
	if(exponent == 0)
	{ return(1) ;
	}
	else
	{	return( base * power(base, exponent - 1));
	}
}	
	
