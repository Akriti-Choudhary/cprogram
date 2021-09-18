#include <stdio.h>
int main()
{	char name[20];
	double unit_consumed , total = 0.0;
	puts("Enter the name of the user:");
	scanf("%[^\n]" ,name);
	puts("Enter the units consumed by the user");
	scanf("%lf" ,&unit_consumed);
	
	if(unit_consumed > 0)
	{	if(unit_consumed > 300)
		{	total = (((unit_consumed - 300) * 100) + (100 * 90) + (200 * 80)) + 100 ;
		}
		else if (unit_consumed > 200)	
		{	total = ((unit_consumed - 200) * 90) + (200 * 80) + 100;
		}
		else
		{	total = (unit_consumed * 80) + 100 ;
		}
	}
	else
	{	total = 100 ;
	}
	if( total > 400)
	{	total = total + (0.15 * total);
	}
	
	printf("total amount : Rs %.2lf \n" ,total);
	return 0;
}	
	
