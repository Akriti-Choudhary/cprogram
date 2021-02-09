#include <stdio.h>
int main()
{	int m,n,sum=0;
	printf(" enter two nos.");
	scanf("%d%d" ,&m,&n);
	for(int i=1;i<=n;i++)
	{	sum= sum+m;
	}
	printf(" %d" ,sum);
}
