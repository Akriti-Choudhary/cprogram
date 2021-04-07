#include <stdio.h>
int main()
{	// convert temp from 30 degree C to 50 degree C to the Fahrenheit scale
	puts("temp in degree C		temp in Fahrenheit");
	for(double i = 30; i <= 50; i++)
	{	printf("%10.2lf			%10.2lf" ,i, (((9/5.0)*i) +32));
		puts(" ");
	}
	return 0;
}
