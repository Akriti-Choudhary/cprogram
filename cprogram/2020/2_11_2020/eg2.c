#include <stdio.h>
int main()
{	int a,b;
	printf("enter two nos.");
	scanf("%d%d" ,&a,&b);
	while(a<=b)
	{printf(" %d" ,a);
	a++;
	}
	while(a>=b)
	{printf(" %d" ,a);
	a--;
	}
	return 0;
}
	
