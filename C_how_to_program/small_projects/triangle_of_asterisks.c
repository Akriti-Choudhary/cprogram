#include <stdio.h>

void tri_asterisk( int num);

int main()
{	int num;
	puts(" enter the number of lines");
	scanf("%d" ,&num);
	tri_asterisk(num);
	return 0;
}
void tri_asterisk( int num)
{	for(int i = 1; i <= num; ++i)
	{	for(int j = 1; j <= i ; ++j)
		{	printf("*");
		}
		printf("\n");
	}
}
	
