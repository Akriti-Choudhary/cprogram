#include <stdio.h>
int main()
{	//program to compute the value of e^x by using the formula
	puts("enter the value of x: ");
	int x;
	scanf("%d" ,&x);
	double fact=1,product = 1,sum =1,res=1;
	for(int i=1; i <= x ; ++i)
	{	fact = fact * i;
		product = product * x;
		res = product/fact ;
		sum = sum + res;
	}
	printf("%.4lf" ,sum);
	printf("\n");
}
