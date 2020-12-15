#include <stdio.h>
int main()
{	/*ask two nos from the user and print their sum,product,difference,quotient and remainder 		*/
	int num1,num2;
	puts("enter two nos.");
	scanf("%d%d" ,&num1,&num2);
	int sum=num1+num2;
	int product=num1*num2;
	int difference=num1-num2;
	int quotient=num1/num2;
	int remainder=num1%num2;
	printf(" sum= %d \n product= %d \n difference= %d \n quotient= %d \n remainder= %d \n" ,sum,product,difference,quotient,remainder);
	return 0;
}
	
