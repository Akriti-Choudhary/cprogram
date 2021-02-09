#include <stdio.h>
int main()
{	int a,b,c=1,p=1;
	printf("enter two nos.");
	scanf("%d%d" ,&a,&b);
	while(c<=b)
	{p=p*a;
	c++;
	}

	printf(" %d" ,p);

	
	return 0;
}
	
