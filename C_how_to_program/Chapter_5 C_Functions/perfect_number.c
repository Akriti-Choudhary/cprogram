#include<stdio.h>
void perfectNum( int num);
int main()
{	
	for(int i = 1; i <= 1000 ;++i)
	{	printf("the factors of %d are : " ,i);
		perfectNum(i);
	}
	return 0;
}
void perfectNum( int num)
{	int sum =0;
	
	for(int i = 1; i < num; ++i)
	{	if(num % i == 0)
		{	printf("%d " ,i);
			sum = sum + i;
		}
	}
	puts(" ");
	if( sum == num)
	{	printf("%d is a perfect num \n" ,num);
	}
}
