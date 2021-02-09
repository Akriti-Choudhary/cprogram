#include <stdio.h>
int main()
{	int a,i,rem=0,c=0;
	printf("enter a no.");
	scanf("%d" ,&a);
	for(i=1;i<=a;i++)
	{ rem= a%i;
	if( rem==0)
	{c++;
	}
	}
	if (c==2)
	{printf("%d is a prime no." ,a);
	}
	else
	{printf(" not a prime no");
	}
	return 0;
}
	
