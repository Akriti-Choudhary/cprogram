#include <stdio.h>
int main()
{	int num=0,sum=0;
	puts("enter the nos. , enter -1 to terminate the input");
	while(1)
	{	scanf("%d" ,&num);
		if(num == -1)
		{	puts("input terminated");
			break;
		}
		else
		{	sum=sum+num;
		}
	}
	printf("sum = %d " ,sum);
	return 0;
}
