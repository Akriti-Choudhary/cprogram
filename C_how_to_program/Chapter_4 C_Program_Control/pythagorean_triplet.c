#include <stdio.h>
int main()
/* printing the sets of three integers for the sides of a right triangle - pythagorean triple*/
{	int side1, side2, hypo;
	for(side1 = 1; side1 <= 500; ++side1)	//loop for first side
	{	for(side2 = 1; side2 <= 500; ++side2)		//loop for second side
		{	for(hypo = 1; hypo <= 500; ++hypo)	//loop for hypotenuse
			{	if( (hypo * hypo) == (side1 * side1) + (side2* side2) )
				{	printf(" side1 = %d ,side2 = %d , hypo = %d" ,side1 ,side2, hypo);
				puts(" ");	//for newline
				}
			}
		}
	}
	return 0;
}
