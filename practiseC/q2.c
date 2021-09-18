#include <stdio.h>
int main()
{
	int n,i,j;
	int count =1;
	puts("enter the value of n");
	scanf("%d" ,&n);
	int arr[n*2];
	for(i=1; i<= n*2; i++)
	{
		arr[i-1] = count;
		arr[2*n-i-1] = count+1;
		count++;
	}
	for(i=0; i< n ;i++)
	{
		for(j=0; j<i;j++) 
		{
			printf(" ");
		}
		for( j=i ; j< 2*n-i; j++)
		{
			printf("%2d" ,arr[j]);	
		}
		printf("\n");
	}
	return 0;
}
