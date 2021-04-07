#include <stdio.h>
int main()
{	unsigned int arr[10],large1=0,large2=0;
	puts("enter ten nos.");
	for(unsigned int i=0;i<10;i=i+1)
	{	scanf("%d" ,&arr[i]);
	}
	for(unsigned int i=0;i<10;i=i+1)
	{	if(arr[i] > large1)
		{	large1=arr[i];
		}
	}
	for(unsigned int i=0;i<10;i=i+1)
	{	if((arr[i] < large1)&&(arr[i] >large2))
		{	large2 = arr[i];
		}
	}
	printf("the largest no. is = %d \n the second largest no. is = %d \n" ,large1,large2);
	return 0;
} 
		
		

