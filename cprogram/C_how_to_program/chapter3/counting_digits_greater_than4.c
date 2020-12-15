#include <stdio.h>
int main()
{	int num,rem,count=0;
	puts("enter a five or fewer digit integer");
	scanf("%d" ,&num);
	while(num>0)
	{	rem = num%10;
		if(rem > 4)
		{	count++;
		}
		num = num/10;
	}
	printf(" no. of digits greater than 4 are = %d " ,count); 
	
	return 0;
}
