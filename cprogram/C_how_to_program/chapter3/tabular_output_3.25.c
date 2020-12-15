#include <stdio.h>
int main()
{	int i;
	puts("x	x+10	x+20	x*10");
	for(i=5;i<=25;i=i+5)
	{	printf("%d	%d	%d	%d \n" ,i,i+10,i+20,i*10);
	}
	return 0;
}     
