#include <stdio.h>
int main()
{	int num , num1, i;
	puts("enter the limit of an array");
	scanf("%d" ,&num);
	int arr[num];
	puts("enter the elements of the array");
	for(int i=0; i< num; i++)
	{	scanf("%d" ,&arr[i]);
	}
	puts("enter the no. to be searched");
	scanf("%d" ,&num1);
	for(i=0; i< num; i++)
	{	if(arr[i] ==num1)
		{	printf("the no. is found at index = %d \n" ,i);
		}
	}
	return 0;
}
