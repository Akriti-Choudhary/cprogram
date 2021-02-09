#include <stdio.h>
int main()
{	int n,i=1;
	double res=0;
	printf("enter the limit");
	scanf("%d" ,&n);
	while(i<=n)
	{
	res= res+(1.0/i);
	i++;
	}

	printf(" %lf" , res);

	
	return 0;
}
	
