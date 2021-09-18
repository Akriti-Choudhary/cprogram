#include <stdio.h>
int main ()
{	float a,b,c; 
	float total, d,discount, final;	
	printf("%f%f%f" ,a,b,c);
	scanf("%f%f%f" ,&a,&b,&c);
	total = a+b+c;
	d=total;
	 if( total >= 5000)
	  {discount = 0.2 *d;
	}
	else 
	if ((total < 5000) && (total >= 3000))
	 { discount = 0.1 *d;
	}
	else 
	if ((total <3000) && (total >=1000))
	{discount = 0.05 *d;
	}
	else
	{discount = 0;
	}
	
	final = total - discount;
	printf("%f" ,total);
	printf("\n %f" ,final);
	return 0;
		

}	  
	  
