#include <stdio.h>
int main()
{	int num,quo,product=1,count=0,test,product1=1,sum=0,rem =0;
	puts("input an integer (5 digits or fewer) containing only 0's and 1's");
	scanf("%d" ,&num);
	test = num;
	while(test > 0)
	{	rem = test%10;
		count ++;
		test = test /10;
	}
	
	for(int i = 1; i< count ;i++)
	{	
		if(i==1)
		{	if(num ==1)
			{	sum = sum +1;
			}
		}
		else
		{	rem = num%10;
			printf("rem = %d \n" ,rem);
			for(int j = 1; j<i ;j++)
			{	product = product*2*rem;
			}
			printf("product = %d\n " ,product);
			sum=sum+product;
			printf("sum = %d \n" ,sum);
			num = num/10;
			product =1;
		}
	
	}
	printf("the decimal equivalent is = %d \n " ,sum);
	
	
	return 0;
}
