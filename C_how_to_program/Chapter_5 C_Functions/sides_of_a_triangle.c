#include <stdio.h>
#include <math.h>
double area( double side ,double base ,double height ); //function prototype

int main()
{	double base ,height ,side ;
	printf("enter the three sides of the triangle \n""side \n" "base \n" "height \n ");
	scanf("%lf%lf%lf" ,&side ,&base ,&height);
	if((side + base >= height) || (height + base >= side) || (side + height >= base))
	{	printf("area of the triangle = %.2lf" ,area( side ,base ,height ));
	}
	else 
	{	printf("the entered sides doesnot form a triangle");
	}
	return 0;
}
double area( double side ,double base ,double height ) //function to calculate area
{	double ar = 0.5 * base * height;
	return(ar);
}
