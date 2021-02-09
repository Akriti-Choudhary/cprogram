#include <stdio.h>
int main()
{	int acc_num, mor_amt , mor_term, tot,mon_pay ;
	float rate;
	for(int i =1 ; ; i++)
	{	printf("enter account number (-1 to End) : \n");
		scanf("%d" ,&acc_num);
		if( acc_num == -1)
		{	break;
		}
		else
		{
			printf(("enter mortgage amount(in dollars) : \n");
			scanf("%d" ,&mor_amt);
			printf(("enter mortgage term(in years) : \n");
			scanf("%d" ,&mor_term);
			printf(("enter interest rate(as a decimal) : \n");
			scanf("%f" ,&rate);
			
			tot = mor_amt + (mor_amt * rate * mor_term) ;
			mon_pay = tot / mor_term ;
		
			printf(" the monthly payable interest is :$ %d \n" ,mon_pay);
		}
	}
	return 0;
}
	
	
	
	
