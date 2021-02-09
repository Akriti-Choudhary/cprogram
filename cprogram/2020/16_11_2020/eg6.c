#include <stdio.h>
int main()
{	int m,n,product=1;
	printf(" enter the no. and the power");
	scanf("%d%d" ,&m,&n);
	for(int i=1;i<=n;i++)
	{	product= product*m;
	}
	printf(" %d" ,product);
}
