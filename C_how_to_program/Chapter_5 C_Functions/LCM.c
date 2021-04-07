#include <stdio.h>
int main()
{	int num1 , num2;
	puts("enter the two integers  ");
	scanf("%d%d" ,&num1 ,&num2);
	for(int i = 2;i <= num1 ; ++i)
	{	if( (num1 % i == 0) & (num2 % i == 0))
		{	printf("the LCM of the two integers are : 1 and %d \n" ,i);
			break;
		}
	}
	
	printf("the LCM of the two integers are : 1 \n");
		
	return 0;
}
