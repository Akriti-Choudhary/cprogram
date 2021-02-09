#include <stdio.h>
int main( )
{	int num,rem;
	int rev=0;
	printf(" enter a no.");
	scanf("%d" ,&num);
	for(int i=1;i<=num; i++)
	{ rem= num%10;
	  rev=rev*10+rem;
	  num=num/10;
	 }
	 printf("the reversed no. is %d" ,rev);
	 return 0;
}
