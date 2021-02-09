#include <stdio.h>
int maximum(int num1 , int num2);
int main()
{	int a, b, max;
	puts("enter two integers");
	scanf("%d%d" ,&a ,&b);
	max = maximum(a,b);
	printf("the maximum no. is = %d" ,max);
	return 0;
}
int maximum(int num1 , int num2)
{	if(num1> num2)
	{ return num1 ;
	}
	else 
	{ return num2;
	}
}	
