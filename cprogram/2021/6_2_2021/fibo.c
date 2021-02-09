#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);

int main()
{	unsigned int number;
	printf("%s" ,"enter an integer");
	scanf("%u" ,&number);
	
	unsigned long long int result = fibonacci(number);
	
	printf("fibonacci(%u) =%llu\n" ,number,result);
	
}
unsigned long long int fibonacci(unsigned int n)
{
if(n==0 || n==1)
{	return n;
}
else
{	return fibonacci(n-1) + fibonacci(n-2) ;
}
}
