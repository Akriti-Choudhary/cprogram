#include <stdio.h>
int main()
{	//check for prime no.
	int num ,i ,count=0;
	puts("enter a no.");
	scanf("%d" ,&num);
	for(i=1 ;i<=num ;i++)
	{	if(num%i==0)
		{	count++;
		}
	}
	if (count==2)
	{	printf("%d is a prime no." ,num);
	}
	else
	{	printf("%d is not a prime no." ,num);
	}
	return 0;
}
