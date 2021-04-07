#include <stdio.h>
int main()
{	unsigned int counter,number,largest=0;
	puts("enter 10 non-negative nos.");
	for(counter=1;counter<=10;counter++)
	{	scanf("%u" ,&number);
		if(number > largest)
		{	largest = number;
		}
	}
	printf("the largest of the numbers %d" ,largest);
	return 0;
}
