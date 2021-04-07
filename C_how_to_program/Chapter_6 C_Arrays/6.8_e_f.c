#include <stdio.h>
#define SIZE 5
int main()
{	double d1[SIZE];
	double d2[SIZE];
	double difference[SIZE];
	double sum[SIZE];
	double copy_d1[SIZE*2];
	int count = 0;
	puts("enter the elements in the first array");	
	for(int i = 0 ; i< SIZE ; ++i)
	{	scanf("%lf" ,&d1[i]);
	}
	
	puts("enter the elements in the second array");
	for(int i = 0 ; i< SIZE ; ++i)
	{	scanf("%lf" ,&d2[i]);
	}
	
	//calculating the sum and difference of the elements 
	for(int i = 0 ; i< SIZE ; ++i)
	{	sum[i] = d1[i] + d2[i];
		difference[i] = d1[i] - d2[i];
	}
	
	puts("the elements in the sum array is :");
	for(int i = 0 ; i< SIZE ; ++i)
	{	printf("%.2lf " ,sum[i]);
	}
	puts(" ");
	puts("the elements in the difference array is :");
	for(int i = 0 ; i< SIZE ; ++i)
	{	printf("%.2lf " ,difference[i]);
	}
	puts(" ");
	
	for(int i = SIZE ; i< SIZE*2 ; ++i)
	{	copy_d1[i] = d1[count];
		count ++;
	}
	
	puts("printing the copied array into its double sized array (copied from SIZE to SIZE*2)");
	for(int i = 0 ; i< SIZE*2 ; ++i)
	{	printf("%.2lf " ,copy_d1[i]);
	}
	return 0;
}
