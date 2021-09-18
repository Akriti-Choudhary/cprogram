#include <stdio.h>
int main()
{	unsigned char a ,b,c;
	printf("enter a no.");
	scanf("%hhd" ,&a);
	b=a >> 4;
	printf("\n first 4 bit decimal value %d" ,b);
	
	c= a << 4;
	c= c>> 4;
	printf("\n last 4 bit decimal value %d" ,c);
}
		


