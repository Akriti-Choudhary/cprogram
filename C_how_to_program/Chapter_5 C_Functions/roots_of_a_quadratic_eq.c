#include <stdio.h>
#include <math.h>

int main()
{	int a , b, c;
	puts("enter the coefficients of quadratic equation (a , b , c) :");
	scanf("%d%d%d" ,&a ,&b ,&c);
	int discriminant = b*b - 4*a*c;
	if ( discriminant > 0)
	{	printf(" real roots \n");
		puts(" the roots are :");
		float root1 = (-b + sqrt(discriminant)) / (2 * a) ;
		float root2 = (-b - sqrt(discriminant)) / (2 * a) ;
		printf("%.3f \n %.3f" ,root1 ,root2);
		puts(" ");
	}
	else
	{	printf(" imaginary roots \n");
	}
	
	
	return 0;
}
