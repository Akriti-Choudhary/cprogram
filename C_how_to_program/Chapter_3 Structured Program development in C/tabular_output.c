#include <stdio.h>
int main()
{	int i;
	puts("N	N^2	N^3	N^4");
	for(i=0;i<=10;i++)
	{	printf("%d	%d	%d	%d \n" ,i,i*i,i*i*i,i*i*i*i);
	}
	return 0;
}     
