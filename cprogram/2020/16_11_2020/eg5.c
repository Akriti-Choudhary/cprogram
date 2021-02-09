#include <stdio.h>
int main()
{int num,product=1,ulim,llim;
	printf("enter a no.");
	scanf("%d" ,&num);
	for(int i=0; ; i++)
	{product=product*2;
	if ( product >= num)
	{	 ulim= product;
	 	 llim= product/2;
	 	 break;
	 }
	 
	 }
	 printf("upper limit = %d \n lower limit = %d \n" ,ulim ,llim);
	 return 0;
}	
