#include <stdio.h>
int main()
{	/* display all the integer value of four bytes */ 
	int a , b ;
	printf(" enter a no.");
	scanf("%d" ,&a);
	b=a;
	b= b&0xff;
	printf("\n the first eight bits are %d" ,b);
	b=a;
	b= b&0xff00;
	b=b>>8 ;
	printf("\n the next eight bits are %d" ,b);
	b=a;
	b= b&0xff0000;
	b=b>>16;
	printf("\n the next eight bits are %d" ,b);
	b=a;
	b=b&0xff000000;
	b=b>>24;
	printf("\n the next eight bits are %d" ,b);
}
	  
	
	
