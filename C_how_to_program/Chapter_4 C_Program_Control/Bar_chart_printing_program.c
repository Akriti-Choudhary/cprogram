#include <stdio.h>
int main() //start of main
{
	int arr[5];
	puts("enter five integers");
	for(int i=0; i < 5; ++i)      //starting of loop
	{
		scanf("%d" ,&arr[i]);
		if((arr[i] > 1) && (arr[i] <30)) // condition applied
		{	
			for(int j =1; j<= arr[i] ;++j)
			{
				printf("*");	// chart printing
			}
			printf("\n");	// shift to new line
		}
		
		else
		{	
			printf("limit exceeded \n");	//if condition is not satisfied
		}
	}
	return 0;
}//end of main
		
