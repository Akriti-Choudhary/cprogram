#include <stdio.h>
unsigned int long long  fibo( unsigned int limit);
int main()
{	unsigned int limit;
	puts("enter the limit for the fibonacci series");
	scanf("%d" ,&limit);
	fibo(limit);
	return 0;
	
}
unsigned int long long  fibo( unsigned int limit)
{	unsigned int i = 1;
	printf("0 1 ");
	unsigned int long long first = 0;
	unsigned int long long second = 1;
	while( i <= limit-2)
	{	
		unsigned int long long sum = first + second ;
		
		first = second ;
		second = sum ;
		++i;
		printf("%llu " ,sum );
	
	}
	return 0;
}
