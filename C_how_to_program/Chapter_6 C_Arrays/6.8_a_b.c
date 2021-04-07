#include <stdio.h>
int main()
{	int arr[5];
	puts("enter the values in the array of size 5");
	for( int i = 0; i < 5; ++i)
	{	scanf("%d" ,&arr[i]);
	}
	int sum = arr[1] + arr [3] ;
	printf("sum of second and fourth element of the array is = %d \n" ,sum);
	
	int largest = arr[0];
	int smallest = arr[0];
	for( int i = 0; i < 5; ++i)
	{	if(arr[i] > largest)
		{	largest = arr[i];
		}
	}
	
	for( int i = 0; i < 5; ++i)
	{	if(arr[i] < smallest)
		{	smallest = arr[i];
		}
	}
	printf("the largest value in the array is = %d \n""the smallest value in the array is = %d \n" , largest , smallest);
	
	return 0;
}
