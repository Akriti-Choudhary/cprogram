#include <stdio.h>
int main()
{	
	int a,c,d,e,p;
	printf("enter four digit no.");
	scanf("%d",&a);
	p=a;
	c=a%10;
	d=c*1000;
	a=a/10;
	
	c=a%10;
	d=d+c*100;
	a=a/10;
	
	c=a%10;
	d=d+c*10;
	a=a/10;
	
	c=a%10;
	d=d+c;
	printf("\n %d" ,d);
	
	e = (p == d)? 0 : 1;
	printf("\n %d" ,e);
	
} 
	
