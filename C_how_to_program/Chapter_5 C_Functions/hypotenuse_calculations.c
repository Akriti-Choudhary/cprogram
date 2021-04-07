#include <stdio.h>
#include <math.h>
double hypotenuse( double side1 ,double side2 ); //function prototype

int main()
{	double side1 ,side2 ;
	puts("enter the two sides of the triangle");
	scanf("%lf%lf" ,&side1 ,&side2);
	printf("%.2lf" ,hypotenuse( side1 ,side2 ));
	return 0;
}
double hypotenuse( double side1 ,double side2 ) //function to calculate hypotenuse
{	double hypo = sqrt(side1*side1 + side2*side2);
	return(hypo);
}
