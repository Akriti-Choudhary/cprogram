#include <stdio.h>
int main()
{	//to calculate sum of multiples of 3 from 1 to 50
	unsigned int sum =0;
	for(int i =1; i <= 50 ; i++)
	{	sum = sum + (i * 3); 
	}
	printf(" Sum of multiples of 3 from 1 to 50 is %u \n" ,sum);
	return 0;
}
