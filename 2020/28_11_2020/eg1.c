#include <stdio.h>
int main()
{	int n,i;
	puts("enter the size of the array");
	scanf("%d" ,&n);
	int arr[n];
	puts("enter the first value");
	scanf("%d" ,&arr[0]);
	printf(" %d",arr[0]);
	for(i=0;i< n-1;i++)
	{	arr[i+1] = arr[i] +3;
		printf(" %d" ,arr[i+1]);
	}
	printf(" \n");
	puts("the reversed array -");
	for(i=n-1; i>=0;i--)
	{	printf(" %d" ,arr[i]);
	}
	printf(" \n");
	
	return 0;
}
	
