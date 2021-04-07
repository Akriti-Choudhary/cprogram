#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	int dice1 ,dice2 , sum ,count = 3 ;
	int total[13] = {0};
	srand(time(NULL));
	for(int i = 0 ; i < 36000 ; ++i)
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		sum = dice1 + dice2;
		total[sum]++ ;
		sum = 0;
	}
	//printing the frequency of the sum
	puts(" possible combination frequency upto 36000 times rolling of dice");
	for( int i = 2; i <= 12 ;++i) 
	{	printf("%2d%10d \n" ,i ,total[i]); 
	}
	return 0;
}
