#include <stdio.h>
#include <math.h>
double triangle( double hypo ,double base ,double height ); //function prototype

int main()
{	double hypo, base, height ;
	puts("enter the hypotenuse");
	scanf("%lf" ,&hypo);
	puts("enter the base");
	scanf("%lf" ,&base);
	puts("enter the height");
	scanf("%lf" ,&height);
	printf("%.2lf" ,triangle( hypo, base, height));
	return 0;
}
double triangle( double hypo ,double base ,double height ) //function to calculate hypotenuse
{	if(hypo * hypo == base * base + height * height)
	{	return(1);
	}
	else
	{	return(0);
	}
}
