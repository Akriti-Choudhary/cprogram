#include <stdio.h>
int main()
{	double total,cou_sal,st_sal,tot_sal,sales;
	char month;
	for(int i = 1;i <= 12;i++)
	{	puts(" ");
		puts("enter total amount collected(-1 to quit) : ");
		scanf("%lf" ,&total);
		if( total == -1)
		{	break;
		}
		else
		{	puts("enter name of month: ");
			scanf("%s" ,&month); 
			printf("\n Total collection: $%.2lf \n" ,total);
			printf(" Sales : ");
			scanf("%lf" ,&sales);
			st_sal = 0.04 * sales;
			cou_sal = 0.05 * sales;
			printf(" country sales tax : $ %.2lf \n" ,cou_sal);
			printf(" state sales tax : $ %.2lf \n" ,st_sal);
			printf(" total sales tax collected : $ %.2lf \n" ,cou_sal+st_sal);
		}
	}
	return 0;
}
	
		
		 
		
	
	
