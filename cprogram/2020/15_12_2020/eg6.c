#include <stdio.h>
int check(int a);
int prime(int b);
int main()
{	int num;
	puts("enter a positive even num");
	scanf("%d" ,&num);
	if((num%2 != 0) || ( num <0))
	{ printf(" Wrong input");
	}
	else
	{ check(num);
	}
	return 0;
}
int check(int a)
{	int res,sum=0;
	for(int i =1; i<= a; i++)
	{	if(a%i == 0)
		{	res = prime(i);
		}
		if(res == 1)
		{ sum = sum + i;
		}
		if(sum == a)
		{	printf("%d " ,i);
		}
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
