#include <stdio.h>
int main()
{	puts("enter the limit for the series");
	int n;
	scanf("%d" ,&n);	
	int x[n],i,a,b;
	x[0]=0;
	x[1]=1;
	for(i=0;i< n-2;i++)
	{	a=x[i];
		b=x[i+1];
		x[i+2]=a+b;
	}
	printf("the fibonacci series till %dth term  is - \n" ,n);
	for(i=0;i< n;i++)
	{	printf(" %d" ,x[i]);
	}
	return 0;
}
