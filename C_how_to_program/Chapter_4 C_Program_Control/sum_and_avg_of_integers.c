#include <stdio.h>
int main()
{	int limit , sum=0, avg=0, num, i;
	puts("enter the values(first num will be considered as limit)");
	scanf("%d" ,&limit);
	for(i = 1; i <= limit; i++)
	{	scanf("%d",&num);
		sum = sum + num;
	}
	avg = sum / limit;
	printf(" sum = %d \n average = %d \n" ,sum,avg);
	return 0;
}
