#include <stdio.h>
int main()
{	int n,i,sum;
	puts("enter the size of the array");
	scanf("%d" ,&n);
	int arr[n];
	puts("enter the first value");
	scanf("%d" ,&arr[0]);
	sum = arr[0];
	printf(" %d",arr[0]);
	for(i=0;i< (n-1)/2;i++)
	{	arr[i+1] = arr[i] +3;
		printf(" %d" ,arr[i+1]);
	}
	//reverse part//
	printf(" %d" ,sum);
	for(i=(n-1)/2; i< n-2;i++)
	{	sum = sum + 3; 
		printf(" %d" ,sum);
	}
	printf(" \n");
	
	return 0;
}
