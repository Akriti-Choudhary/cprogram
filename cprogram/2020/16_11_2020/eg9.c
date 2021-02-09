#include <stdio.h>
int main()
{	int num,count=0;
	printf("enter the no.");
	scanf("%d" ,&num);
	for(int i=1; i<= num; i++)
	{	if(num%i==0)
		{	count++;
		}
	}
		if(count==2)
		{	printf("%d is a prime no." ,num);
		}
		else
		{ printf("%d is not a prime no." ,num);
		}
		return 0;
}
