#include <stdio.h>
int seperator(int A);
int main()
{	
	int A;
	int N;
	scanf("%d" ,&N);
	scanf("%d" ,&A);
	 int arr[N];
	 int rev_A = seperator( A);
	int i , j , sum = 0;
	for(i = 0; i < N ; ++i )
	{	int rem = rev_A % 10;
		arr[i] = rem;
		rev_A = rev_A / 10; 
	}
		for(i = 2; i <= N ; ++i )
	{
		for(j = 1; j <= i-1 ; ++j)
		{
			sum = sum + ( (arr[i] - arr[j]) * (arr[i] - arr[j]) );
		}
	}
	printf("%d" ,sum);
	return 0;
	
}
int seperator(int A)	//function to reverse the digit
{	int rem, count=0 , finalNum = 0;
	while(A > 0)
	{	
		rem = A % 10;
		finalNum = finalNum*10 + rem;
		count++;
		A = A/10;
	}
	printf(" the reversed number is : %d \n" ,finalNum);
	return finalNum;	
}
