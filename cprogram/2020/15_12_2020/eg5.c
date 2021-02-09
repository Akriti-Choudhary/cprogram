#include <stdio.h>
int deci(double a);
int main()
{	double num;
	int real;
	puts("enter a real value");
	scanf("%lf" ,&num);
	real = deci(num);
	printf("%d is the first two digits after decimal " ,real);
	return 0;
}
int deci(double a)
{	int p = a;
	double diff = a - p;
	double product = diff *100;
	return (int)product;
}
	

