#include <stdio.h>
int sum(int num1 , int num2);

int main()
{	
	int num1 ,num2;
	puts("enter two numbers to calculate sum");
	scanf("%d%d" ,&num1 ,&num2);
	printf("the sum of two numbers = %d \n" ,sum(num1 , num2));
	return 0;
}
int sum(int num1 , int num2)
{
	if(num2 == 0)
	return num1;
	else
	return(sum(num1 , num2 -1) + 1);
}


