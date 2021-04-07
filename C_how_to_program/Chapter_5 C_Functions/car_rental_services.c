#include <stdio.h>
double calculateCharges( int hrs);
/* assume that no car is rented for more than 72 hours at a time*/
int main()
{	int hr1 , hr2 , hr3;
	puts("enter the hours for which the car has been rented for three customers seperately");
	scanf("%d%d%d" ,&hr1 ,&hr2 ,&hr3);	//entering the rented hrs
	puts("Car	Hours	Charge");	
	printf("1	%d	%.2lf\n" ,hr1 ,calculateCharges(  hr1));
	printf("2	%d	%.2lf\n" ,hr2 ,calculateCharges(  hr2));
	printf("3	%d	%.2lf\n" ,hr3 ,calculateCharges(  hr3));
	printf("total	%d	%.2lf\n" ,hr1 + hr2 + hr3 ,calculateCharges(  hr1) +calculateCharges(  hr2) + calculateCharges(  hr3));
	return 0;
}
double calculateCharges( int hrs)
{	double total =0.0;
	if( hrs <= 72)
	{	if( hrs == 24)
		{	total = ((hrs / 24) * 50) + (0.50 * hrs) ;
		}
		else if( (hrs > 24) & (hrs <= 48))
		{	total = (2 * 50) + (0.50 * hrs) ;
		}
		else if( (hrs > 48) & (hrs <= 72))
		{	total = (3 * 50) + (0.50 * hrs) ;
		}
		else if ((hrs > 8) & (hrs < 24))
		{	total = (25.00 + ( hrs - 7)*5) + (0.50 * hrs) ;
		}
		else
		{	total = (25.00  + (0.50 * hrs)) ;
		}
	}
	return total ;	//returning total amount of car rental services to be paid for each car
}
