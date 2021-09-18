#include <stdio.h>
int main()
{// take 24 hours format time and display it in 12 hrs format
	int a,b,c;
	printf("enter the time in hours and min.  %d%d" , a,b);
	scanf("%d%d" ,&a,&b);
	if(a>12)
	{ c= a-12;
	  printf("%d" ,c);
	 printf(": %d PM" ,b);
	 printf("\n");
	  
	}
	 
	 else 
	 {c=a;
	 printf("%d" ,c);
	 printf(": %d AM" ,b);
	 printf("\n");
	 }
	 
	  return 0;
}
