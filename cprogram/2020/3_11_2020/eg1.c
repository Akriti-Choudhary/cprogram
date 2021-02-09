#include <stdio.h>
int main()
{	int a ,i=1;
	float sum=1;
	float res=1;
	printf(" enter the limit");
	scanf("%d" ,&a);
	while(i<=a)
	{res=res*i;
	sum=sum+1.0/res;
	i++;
	}
	printf("%f" ,sum);
	return 0;
}
