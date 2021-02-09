#include <stdio.h>
int main()
{	//display reverse array	
	int num, rem,count=0,limit;
	puts("enter the limit of the array");
	scanf("%d" ,&num);
	limit=num;
	int arr[num];
	int arr2[num];
	puts("enter the nos.");
	for( unsigned int i=0;i< num; i++)
	{	scanf("%d" ,&arr[i]);
	}
	reverse:
		while( num>=0)
		{	num--;
			arr2[num] = arr[count];
			count++;
			goto reverse;
		}
		puts("the reversed array is");
		for( unsigned int i=0;i< limit; i++)
	{	printf(" %d" ,arr2[i]);
	}
		
	return 0;
}
	
