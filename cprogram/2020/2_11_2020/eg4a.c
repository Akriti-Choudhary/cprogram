#include <stdio.h>
int main()
{	int a,r=a;
	printf("enter a no.");
	scanf("%d" ,&a);
	while(a>0)
	{r=a%10;
	a=a/10;
	printf(" \n %d" ,r); 
	}
	
	return 0;
}
	
