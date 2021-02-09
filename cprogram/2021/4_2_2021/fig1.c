#include <stdio.h>
int main()
{	int n;
	scanf("%d" ,&n);
	int i ,j,p,k,l,count=0;
	for(i=n; i>=1;--i)
	{	
		for(j=1; j<=n-count;j++)
		{	
			printf("%d" ,i);
		}
		for(k=1; k<n-count ;k++)
		{
			printf("%d" ,i);
		}
		for(l=n;l>n-count;l--)
		{
			printf("%d" ,l);
		}
		printf("\n");
		count++;
		for(p=n;p>n-count;p--)
		{	
			printf("%d" ,p);
		}
	}
}
