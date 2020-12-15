
#include <stdio.h>
int main()
{	int a;
	puts("enter the limit of an even size array");
	scanf("%d" ,&a);
	int x[a] ;
	puts("enter the elements of an even size array");
	for(int i=0;i<a;i++)
	{	scanf(" %d" ,&x[i]);
	}
	for(int i=(a-1)/2;i>=0;i--)
	{	
		printf(" %d" ,x[i]);
		printf(" %d" ,x[a-i-1]);
		
	}
	return 0;
}
	
