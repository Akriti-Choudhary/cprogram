#include <stdio.h>
int main()
{	int num1,num2;
	puts("enter two integers");
	scanf("%d%d" ,&num1,&num2);
	if(num2%num1==0)
		printf("%d is a multiple of %d" ,num1,num2);
	else
		printf("%d is not a multiple of %d" ,num1,num2);
		
	return 0;
}
