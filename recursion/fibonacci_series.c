#include <stdio.h>
//printing fibonacci series using recursion
int fibo( int num);
int main()
{	int num;
	puts("enter the limit of fibonacci series");
	scanf("%d" ,&num);
	printf("%d" ,fibo(num));
	return 0;
}
int fibo( int num)
{	int first = 0;
	int second = 1;
	
	if( num == 0)
	return first;
	else if ( num ==1)
	{	
		return( fibo(num -1));
		printf("%d" ,1);
	}
	else
	{	int sum = first + second;
		first = second;
		second = sum;
		 
		return (fibo(num -1));
		printf ("%d " ,sum);
	}
}
