#include <stdio.h>
int main()
{	int count = 0 ,size1 ,size2 ;
	puts("enter the size of first set of numbers");
	scanf("%d" ,&size1);
	puts("enter the size of second set of numbers");
	scanf("%d" ,&size2);
	int arr1[size1];
	int arr2[size2];
	//entering data in 1st array
	puts("enter the first set of numbers");
	for(int i =0 ; i < size1; ++i)
	scanf("%d" ,&arr1[i]);
	//entering the elements in second array
	puts("enter the second set of numbers");
	for(int i =0 ; i < size2; ++i)
	scanf("%d" ,&arr2[i]);
	
	puts("unique elements are");
	for(int i =0; i < size1; ++i)
	{	for(int j=0; j < size2; ++j)
		{	if(arr1[i] == arr2[j])
			count++;
		}
		if(count == 0)
		{	printf("%d " ,arr1[i]);
		}
		count = 0;
	}
	puts(" ");
	
	for(int i =0; i < size2; ++i)
	{	for(int j=0; j < size1; ++j)
		{	if(arr2[i] == arr1[j])
			count++;
		}
		if(count == 0)
		printf("%d " ,arr2[i]);
		count = 0;
	}
	puts(" ");

	return 0;
}
	
	
	
	
	
	
