#include <stdio.h>
//check for prime using recursion
int isPrime(int num, int var);
int main()
{	int num;
	int res;
	puts("enter a num to check for prime");
	scanf("%d" ,&num);
	res =  isPrime(num , num-1);
	puts(" ");
	if (res == 1)
	printf("Prime number");
	else 
	printf("composite number");
	puts(" ");
	return 0;	
}
int isPrime(int num , int var)
{	
	if(var == 1)
	{
		return 1;
	}
	else
	{	
		if( num % var == 0)
		{	
			return 0;
		}
		else 
		{	isPrime( num , var-1);
		}
	}
}
