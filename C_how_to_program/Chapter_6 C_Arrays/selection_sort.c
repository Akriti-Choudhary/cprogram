#include <stdio.h>
//selection sort
int main()
{
	int temp = 0;
	int arr[10];
	puts("enter 10 elements of the array");
	for(int i =0; i < 10; ++i)
	{	scanf("%d" ,&arr[i]);
	}
	
	for(int i =0; i < 9; ++i)
	{	for(int j = i+1; j <10; ++j)
		{	if(arr[j] < arr[i])
			{	
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	puts("the sorted array in ascending order is");
	for(int i =0; i < 10; ++i)
	{	printf("%d " ,arr[i]);
	}
	
	return 0;
}
