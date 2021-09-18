#include <stdio.h>
int main()
{	
	int a,c;
	printf("enter five digit no.");
	scanf("%d",&a);
	while (c>0)
	{c=a%10;
	printf("\n %d" ,c);
	a=a/10;
	}
	return 0;
} 
	
