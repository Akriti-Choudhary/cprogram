#include <stdio.h>
int main()
{	int a,b,first,last,mid,d,e,f,p,q;	
	printf(" enter a 4 digit no.");
	scanf("%d" ,&a);
	p=a;
	first = a/1000;
	b=p%100; 
	q=b;
	mid = b/10;
	last = q%10;
	e = mid*mid; 
	f = first*10+last;
	d =(e==f)?1:0 ;
	printf("%d" ,d);
}
	
	
