#include <stdio.h>
int main()
{	/* enter three nos. and print the smallest no. and the largest no. */
	int num1,num2,num3;
	puts("enter three different integers");
	scanf("%d%d%d" ,&num1,&num2,&num3);
	if((num1<num2)&&(num1<num3))
	{	printf(" Smallest is %d \n" ,num1);
	}
	else if((num2< num1)&&(num2<num3))
	{	printf(" Smallest is %d \n" ,num2);
	}
	else
	{	printf(" Smallest is %d \n" ,num3);
	}
	
	if((num1>num2)&&(num1>num3))
	{	printf(" Largest is %d \n" ,num1);
	}
	else if((num2> num1)&&(num2>num3))
	{	printf(" Largest is %d \n" ,num2);
	}
	else
	{	printf(" Largest is %d" ,num3);
	}
	
	return 0;
}
