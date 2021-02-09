#include <stdio.h>
int main()
{	// to calculate the factorial
     	long long unsigned int fact=1;
     	int x, i,j;
	puts ("enter the limit");
	scanf("%d" ,&x);
	for( j= 1; j<= x; ++j)
	{	for(i =1; i <= j ;++i)
		{	fact = fact * i;
		}
		printf("%10d! = %llu" ,j ,fact);
		puts(" ");
		fact = 1;
	}
	return 0;
}
