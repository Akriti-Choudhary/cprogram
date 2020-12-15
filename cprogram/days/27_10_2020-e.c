#include <stdio.h>
int main()
{	int a,b,c;
	printf("enter three nos.");
	scanf("%d%d%d" ,&a,&b,&c);
	if(a>b)
	{if(a>c)  
	{if(b>c)
	 { printf("%d%d%d" ,a,b,c);
	 }
	 else
	 {printf("%d%d%d" ,a,c,b);
	 }
	 }
	 else if (c>a)
	 {if(c>b)
	 { printf("%d%d%d" ,c,a,b);
	 }
	 else
	 {printf("%d%d%d" ,c,b,a);
	 }
	 }
	 }
	 else if(b>a)
	 {if(b>c)
	 {if(a>c)
	 { printf("%d%d%d" ,b,a,c);
	 }
	 else
	 {printf("%d%d%d" ,a,c,a);
	 }
	 }
	 else if (c>b)
	 
	 { printf("%d%d%d" ,c,a,b);
	 }
	 else
	 {printf("%d%d%d" ,c,b,a);
	 }
	 }
	 return 0;
	 }
	 
	 
	 
