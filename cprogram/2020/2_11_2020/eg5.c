#include <stdio.h>
int main()
{	int a,b=0;
	printf("enter a no.");
	scanf("%d" ,&a);
	while(a>0)
	{b++;
	a=a/10;
	
	
	}
	
	printf(" no. of digts are %d" ,b);
	return 0;
}
	
