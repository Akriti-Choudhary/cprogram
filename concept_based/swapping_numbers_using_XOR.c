#include <stdio.h>
int main()
{
	int num1 ,num2 ;
	puts("enter two numbers to be swapped ");
	scanf("%d%d" ,&num1 ,&num2);
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	
	printf("After swapping num1 = %d and num2 = %d \n" ,num1 ,num2);
	

}
