#include <stdio.h>
#include <math.h>
int main()
{	double x;
	puts("enter the number");
	scanf("%lf" ,&x);
	int y = floor(x + 0.5);	//using floor function of math library
	printf("original num = %.2lf \n rounded number = %d \n" ,x ,y);
	
	return 0;
}	
