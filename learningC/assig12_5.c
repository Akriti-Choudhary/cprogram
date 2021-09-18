#include <stdio.h>
int main()
{	
	int a,c;
	printf("enter four digit no.");
	scanf("%d",&a);
	while (c>0)
	{c=a%10;
	if(c>0)
	printf("%d" ,c);
	else
	printf(" ");
	a=a/10;
	}
	
} 
	
