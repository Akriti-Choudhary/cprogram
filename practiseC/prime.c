#include <stdio.h>
int prime(int x, int y);
int main()
{
	int a,b;
	puts("enter the range");
	scanf("%d%d" ,&a,&b);
	
	printf("the no. of prime nos. b/w %d and %d is = %d" ,a,b,prime(a,b));
	return 0;
}
int prime(int x,int y)
{
	int i,j,count =0,counter = 0;
	for( i = x; i <= y; i++)
	{
		for( j = 1; j<= i; j++)
		{
			if(i%j == 0)
			count++;
		}
		if(count == 2)
		{
			counter++;
		}
		count =0;
	}
	return counter;
}
