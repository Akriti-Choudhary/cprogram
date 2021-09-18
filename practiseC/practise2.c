#include <stdio.h>
int main()
{	int n;
	puts("enter the value of n");
	scanf("%d" ,&n);
	int a[2*n];
	for(int i = 1; i<= n*2; i=i+2)
	{	a[i-1] = i;
		a[i] = 2*n-i+1;
	}
	for(int i=0;i< n;i++)
	{
		for(int j=0; j<i;j++)
		{
			puts(" ");
		}
		for(int j=i; j< 2*n-i ;j++)
		{	
			printf("%d" ,a[j]);
		}
		printf("\n");
	}
	return 0;
}
