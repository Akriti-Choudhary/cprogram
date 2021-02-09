#include <stdio.h>
int main()
{	int num,i,j;
	
	puts("enter the limit of the array");
	scanf("%d" ,&num);
	int arr[num];
	puts("enter the elements");
	 int *max = arr;
	for(i = 0;i< num; i++)
	{	scanf("%d" ,max+i);
	}
	
	for(j = 0;j< num; j++)
	{	if( *max < *(arr+j))
		{	max = arr+j;
		}
	}
	printf("maximum element is = %d " ,*max);
}
