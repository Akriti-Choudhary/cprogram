#include <stdio.h>
int main()
{	// tp print sum, sum of squares ,sum of cubes of natural nos. till the entered limit
	 int limit, sum=0 , sum_sq = 0 , sum_cb =0;
	 puts("enter the limit :");
	 scanf("%d" ,&limit);
	 for(int i = 1 ; i <= limit ; ++i)
	 {	sum = sum + i;
	 	sum_sq = sum_sq + i*i ;
	 	sum_cb = sum_cb + i*i*i ;
	 }
	 printf(" sum = %d \n sum of squares = %d \n sum of cubes = %d \n" ,sum ,sum_sq, sum_cb);
	 return 0;
}
