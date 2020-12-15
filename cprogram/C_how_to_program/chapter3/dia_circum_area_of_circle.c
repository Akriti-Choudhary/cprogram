#include <stdio.h>
int main()
{	float radius,diameter,circumference,area;
	scanf("%f" ,&radius);
	diameter = 2 * radius;
	circumference = 2 * 3.14159 * radius;
	area = 3.14159 * radius * radius;
	printf("diameter= %f \n circumference =%f \n area =%f \n" ,diameter ,circumference ,area);
	
	return 0;
}
