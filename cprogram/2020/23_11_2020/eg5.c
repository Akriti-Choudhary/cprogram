
#include <stdio.h>
int main()
{	int a,temp=0;
	puts("enter the limit of an even size array");
	scanf("%d" ,&a);
	int x[a] ;
	puts("enter the elements of an even size array");
	for(int i=0;i<a;i++)
	{	scanf(" %d" ,&x[i]);
	}
	
	for(int i=0; i<a ;i=i+2 )
	{	if(x[i]>x[i+1])
		{	temp= x[i];
			x[i] =x[i+1];
			x[i+1] = temp;
		}
		
	}
	for(int i=0;i<a;i++)
	{	printf(" %d" ,x[i]);
	}
	return 0;
}
	
