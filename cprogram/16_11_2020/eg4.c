#include <stdio.h>
int main()
{int num,product=1,ulim,llim,a;
	printf("enter a no.");
	scanf("%d" ,&num);
		
	for(int i=0; ; i++)
	{product=product*2;
	if ( product >= num)
	{	 ulim= product;
	 	 llim= product/2;
	 	 a=llim;
	 	 break;
	 }
	 
	 }
	 printf("upper limit = %d \n lower limit = %d \n" ,ulim ,llim);
	 
	 
	 for( ; ulim>=1 ;ulim=ulim/2)	
	 { 
	 	if(ulim<=num)
	 	{ num = num -ulim;
	 	  printf("1");
	 	 } 
	 	 else 
	 	 { printf ("0");
	 	 }
	 } 
	 return 0;
}	
