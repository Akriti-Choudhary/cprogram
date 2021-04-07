#include <stdio.h>
int main()
{	int side1,side2,side3;
	puts(" enter three sides of a triangle");
 	scanf("%d%d%d" ,&side1,&side2,&side3);
 	if((side1*side1 + side2*side2 == side3*side3) || (side2*side2 + side3*side3 == side1*side1) || (side1*side1 + side3*side3 == side2*side2) )
 	{	printf("the entered sides represent a right angled triangle");
 	}
 	else
 	printf("the entered sides donot represent a right angled triangle");
 	return 0;
 }
