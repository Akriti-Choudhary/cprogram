#include <stdio.h>
int main()
{	int num,d1,d2,d3,d4,d5;
	puts("enter a five digit num");
	scanf("%d" ,&num);
	d5 = num%10;
	num = num/10;
	d4 = num%10;
	num = num/10;
	d3 = num%10;
	num = num/10;
	d2 = num%10;
	num = num/10;
	d1 = num%10;
	printf(" %d   %d   %d   %d   %d   \n" ,d1,d2,d3,d4,d5);
	 return 0;
}
	
