#include <stdio.h>
#include <math.h>
int main()
{	double V , P, r ,n;
	puts("Enter the principal amt ,rate ,time ");
	scanf("%lf%lf%lf" ,&P ,&r ,&n);
	puts("the amt at the end of n years is: ");
	V = P * ( pow(1 + r, n)); 
	printf("%.2lf" ,V);
	return 0;
}
