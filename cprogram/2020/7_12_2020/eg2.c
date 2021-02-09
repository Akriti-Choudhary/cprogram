#include <stdio.h>
int main()
{	int limit,count=1,sum=1;
	puts("enter the limit");
	scanf("%d" ,&limit);
	mylabel:
		while( sum <= limit)
		{	printf(" %d" ,sum);
			sum = sum + count;
			count++;
			goto mylabel;
		}
	return 0;
}
	
