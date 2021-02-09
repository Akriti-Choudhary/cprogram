#include <stdio.h>
int main()
{	/*split the array into  two halves and reverse each half and display in case of odd no. of elements let the mid value kept unchanged */
	puts("enter the size of 1-D array");
	int n;
	scanf("%d" ,&n);
	int arr[n];int i,j;
	puts("enter the elements of the array");
	for(int i=0;i<n ;i++)
	{	scanf("%d" ,&arr[i]);
	}
	puts("the new array is-");
	if(n%2==0)
	{	for( i=n/2-1;i>=0;i--)
		{	printf(" %d" ,arr[i]);
		}
		for(j= n-1;j>=n/2;j--)
		{	printf(" %d" ,arr[j]);
		}
	}
	else
	{		for( i=n/2-1;i>=0;i--)
		{	printf(" %d" ,arr[i]);
		}
		printf(" %d" ,arr[n/2]);
		for( j= n-1;j>n/2;j--)
		{	printf(" %d" ,arr[j]);
		}
		
	}
	return 0;
}
