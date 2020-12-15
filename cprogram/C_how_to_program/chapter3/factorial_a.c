#include <stdio.h>
int main()
{ 	int num, fact=1;
	puts(" enter a no.");
	scanf("%d" ,&num);
	for(unsigned int i = 1; i<=num;i++)
	{	fact = fact *i;
	}
	printf("  %d! = %d " ,num ,fact);
	return 0;
}
