#include <stdio.h>
int main()
{ /* print 1 for leap year else print 0*/
	int a,b;
	printf("enter the year ");
	scanf("%d" ,&a);
	b = (a%4==0)?1:0;
	printf("\n %d" ,b);
} 
