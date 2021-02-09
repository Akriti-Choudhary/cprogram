#include <stdio.h>
int main()
{	// print prime nos. from 1 to 100
	int count =0;
	puts("the list of prime nos. from 1 to 100");
	for(int i = 1; i <= 100 ; ++i)
	{	for(int j = 1; j <= i; ++j)
		{	if( i%j == 0)
			{	count++;
			}
		}
		if( count == 2)
		{	printf("%d" ,i);
			puts(" ");
		}
		count =0;
	}
	return 0;
}
