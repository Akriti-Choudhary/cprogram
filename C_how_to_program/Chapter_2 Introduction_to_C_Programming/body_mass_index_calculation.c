#include <stdio.h>
int main()
{	int weight,height,BMI;
	puts("enter the weight in pounds");
	scanf("%d" ,&weight);
	puts("enter the height in inches");
	scanf("%d" ,&height);
	BMI = (weight*703)/(height*height);
	printf("BMI= %d\n" ,BMI);
	if( BMI<=18.5)
		printf("Underweight \n");
	else if(BMI> 18.5 && BMI <=24.9)
		printf("normal \n");
	else if(BMI> 24.9 && BMI <=29.9)
		printf("Overweight \n");
	else
		{printf("Obese");
		}
		
	return 0;
}
