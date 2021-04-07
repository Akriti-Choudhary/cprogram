#include <stdio.h>
int prime(int num1);
int main()
{	int a,res;
	puts("enter an integer");
	scanf("%d" ,&a);
	res = prime(a);
	if(res == 1)
	{
	printf(" %d is a prime num" ,a);
	}
	else
	{	printf(" %d is not a prime num" ,a);
	}
	return 0;
}
int prime(int num1)
{	int count=0;
	for(int i =1; i<= num1;i++)
	{	if(num1 % i ==0)
		{	count++;
		}
	}
	if(count == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
		
	
}
