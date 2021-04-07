#include <stdio.h>
int main()
{	
	int A[200];
	int N;
	scanf("%d" ,&N);
	int i , j , sum=0;
	for(i = 0; i < N ; ++i )
	{
		scanf("%d" ,&A[i]);
	}
		for(i = 2; i <= N ; ++i )
	{
		for(j = 1; j <= i-1 ; ++j)
		{
			sum = sum + ( (A[i] - A[j]) * (A[i] - A[j]) );
		}
	}
	printf("%d" ,sum);
	return 0;
	
}
