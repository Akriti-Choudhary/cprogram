#include <stdio.h>
int main()
{	int mat[2][3];
	for(int i = 0 ; i< 2; ++i)
	{	for(int j =0 ; j < 3; ++j)
		{	mat[i][j] = 9;
		}
	}
	puts("the value stored in 2 * 3 matrix are :");
	for(int i = 0 ; i< 2; ++i)
	{	for(int j =0 ; j < 3; ++j)
		{	printf("%d" ,mat[i][j]) ;
		}
		printf("\n");
	}
	
	int arr[4][4];
	int sum =0;
	puts("enter the elements into a 4*4 array");
	for(int i = 0 ; i< 4; ++i)
	{	for(int j =0 ; j < 4; ++j)
		{	scanf("%d" ,&mat[i][j]) ;
			sum =  sum + mat[i][j];
		}
	}
	printf("the sum of all the elements in a 4*4 matrix = %d \n" ,sum);
	
	return 0;
}
