#include <stdio.h>
int main()
{	int num ,count=0, i ,j;
	puts("enter the limit of an array");
	scanf("%d" ,&num);
	int arr[num];
	puts("enter the elements of the array");
	for(int i=0; i< num; i++)
	{	scanf("%d" ,&arr[i]);
	}
	puts("the frequency of the nos. are");
	for(i=0; i< num; i++)
	{	for(j=0; j< num; j++)
		{	if(arr[i]==arr[j])
				{	count++;
				}
		}
		printf("frequency of %d is = %d \n" ,arr[i],count);
		count =0;	
	}	
	return 0;
}
