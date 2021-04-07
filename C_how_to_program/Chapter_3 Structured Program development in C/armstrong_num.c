#include <stdio.h>
int main()
{	//three digit armstrong number
	int i,num,rem,product,sum=0;
	puts("Armstrong no. b/w 100 and 1000 is ");
	for(i=100; i< 1000;i++)
	{	num = i;
		while(num > 0)
		{	
			rem = num%10;
			product = rem * rem *rem;
			sum = sum + product;
			num = num/ 10;
			product =1;
		}
		if(i==sum)
		{	printf("%d \n" ,i);
		}
		
		sum =0;
	}
	return 0;
}
