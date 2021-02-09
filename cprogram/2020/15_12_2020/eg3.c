#include <stdio.h>
int sum(int num1);
int main()
{	int a,res;
	puts("enter an integer");
	scanf("%d" ,&a);
	res = sum(a);
	printf(" the sum of all nos. = %d" ,res);
	return 0;
}
int sum(int num1)
{	int rem,total=0;
	while(num1 >0)
	{	rem = num1 % 10;
		total = total + rem;
		num1 = num1/10;
	}
	return total;
	
}
