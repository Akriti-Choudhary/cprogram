#include <stdio.h>
int seperator(int num);
int main()
{	puts("Enter two integers to be divided a and b :");
	int a, b;
	scanf("%d%d" ,&a ,&b);
	
	/* calculating the integer part of the quotient when integer a is divided by integer b*/
	
	int quotient;
	quotient = a / b;
	printf("the integer part of the quotient is = %d \n" ,quotient);
	
	/* calculating the integer part of the remainder when integer a is divided by integer b*/
	
	int remainder = a % b;
	printf("the integer part of the remainder is = %d \n" ,remainder);
	
	/* printing spaces between digits*/
	
	int num;
	puts("enter a number:");
	scanf("%d" ,&num);
	int y = seperator(num);
	puts("the required number to be printed is");
	while( y > 0 )
	{	int rem = y % 10;
		printf("%d  " ,rem);
		y = y / 10;
	}	
	
	return 0;
}
int seperator(int num)	//function to reverse the digit
{	int rem, count=0 , finalNum = 0;
	while(num > 0)
	{	
		rem = num % 10;
		finalNum = finalNum*10 + rem;
		count++;
		num = num/10;
	}
	printf(" the reversed number is : %d \n" ,finalNum);
	return finalNum;	
}






