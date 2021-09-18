#include <stdio.h>
int main()
{	char c;	
	int a,b,d;
	
	printf("enter an operator");
	scanf("%c" ,&c);
	printf("enter the nos. ");
	scanf("%d%d" ,&a,&b);
	switch (c)
	{
	 case'+': 
	  d=a+b;break;
	 case'-': 
	  d=a-b; 
	  break;
	 case'*': 
	  d=a*b; 
	  break;
	 case'%': 
	  d=a%b; 
	  break;
	 case'/':
	   d=a/b; 
	   break;
	 default:  
	  printf("wrong input"); break;
	 }
	 printf("%d" ,d);
	 return 0;
}
	  
