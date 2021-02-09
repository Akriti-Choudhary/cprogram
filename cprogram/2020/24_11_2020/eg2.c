#include <stdio.h>
int main()
{	/* display the 2D array in matrix form */
	int row,colm;
	puts("enter the no. of rows and columns of the 2-D array");
	scanf("%d%d" ,&row,&colm);
	puts("enter the elements of the array");
	int arr[row][colm];
	for(int i=0;i<row;i++)
	{	for(int j=0; j< colm; j++)
		{	scanf(" %d" ,&arr[i][j]);
		}
	}
	printf("the no. of rows = %d \n the no. of columns = %d \n" ,row,colm);
	for(int i=0;i<row;i++)
	{	for(int j=0; j< colm; j++)
		{	printf(" %d" ,arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
