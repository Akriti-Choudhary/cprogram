#include <stdio.h>
int main()
{	int a,b,c,d;
	printf("enter 5 digit no. \n");
	printf("enter 6 digit no. ");
	scanf("%d%d" ,&b,&a);
	d= b %1000;
	d=d /100;
	printf("\n for five digit no. the middle term is %d" ,d);
	c=a / 100;
	c=c % 100;
	printf("\n for six digit no. the middle term is %d" ,c);
	return 0;
}
	
	
	
