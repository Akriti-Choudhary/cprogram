#include <stdio.h>
int main()
{	int a,b;
	printf("enter a three or four or five digit no. \n ");
	scanf("%d" ,&a);
	if( a>= 100 && a< 1000)
	{ b= (a/10)%10;
	}
	else if( a>= 1000 && a< 10000)
	{ b =(a/10)%100;
	}
	else
	{ b= (a%1000)/100 ;
	}
	printf("%d \n" ,b);
}
	
	
