#include <stdio.h>
int input( int b[], int size)
{	puts("enter the elements of the array");
	for(int i=0;i<size;i++)
	{	scanf("%d" ,&b[i]);
	}
	return 1;
}
int display(int c[],int size_1)
{	puts("the entered array is");
	for(int i=0;i<size_1;i++)
	{	printf("%d" ,c[i]);
	}
	return 1;
}
int main()
{	int num;
	puts("enter the size of the array");
	scanf("%d" ,&num);
	int arr[num];
	input( arr ,num);
	display( arr ,num);
	return 0;
}
