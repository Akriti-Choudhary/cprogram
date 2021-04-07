#include <stdio.h>
int main()
{ 	int num, fact=1;
	double e=1;
	puts(" enter a no.");
	scanf("%d" ,&num);
	for(unsigned int j = 1; j<=num;j++)
	{	for(unsigned int i = 1; i<=num;i++)
		{	fact = fact *i;
		}
		e = e+1.0/fact;
	}
	printf("  %lf" ,e);
	return 0;
}
