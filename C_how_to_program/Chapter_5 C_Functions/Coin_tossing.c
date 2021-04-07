//Randomizing the coin tossing
#include <stdio.h>
#include <stdlib.h>
int main()
{	int head = 0 ,tail = 0; 
	unsigned int num;
	puts("enter a number");
	scanf("%d" ,&num);
	srand(num);	//seed the random number generator
	for(int i = 1; i <= 100 ; ++i)
	{	int face = rand() % 2;
		
		if( face == 0)
		{	head++ ;
		}
		else
		{	tail++ ;
		}
	}
	printf(" No. of heads = %d \n" ,head);
	printf(" No. of tails = %d \n" ,tail);
	
	return 0;
}
	
		 
