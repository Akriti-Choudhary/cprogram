#include <stdio.h>
#include <math.h>
int main()
{	double P, c, d, n;
	puts("Enter the present value after n years ,depreciation rate ,original cost ");
	scanf("%lf%lf%lf" ,&P ,&r ,&c);
	puts("the useful life i years are : ");
	int res , x;
	res = P \ c;
	for(int i = 1; ; ++i)
	{	x = pow(res ,i) ;
		if( x == 
	}
	printf("%.2lf" ,V);
	return 0;
}
