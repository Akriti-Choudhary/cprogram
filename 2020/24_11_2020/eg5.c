#include <stdio.h>
int main()
{	/*print the elements lower to the diagonal in the square matrix */
	int row,colm;
	puts("enter the no. of rows and columns of the 2-D square array");
	scanf("%d%d" ,&row,&colm);
	if(row==colm)
	{	puts("enter the elements of the array");
		int arr[row][colm];
		for(int i=0;i<row;i++)
		{	for(int j=0; j< colm; j++)
			{	scanf(" %d" ,&arr[i][j]);
			}
		}
		for(int i=1;i<row;i++)
		{	for(int j=0; j< i; j++)
			{	printf(" %d" ,arr[i][j]);
			}
			printf("\n");
		}
		}
	else 
	{	printf("wrong input ->enter dimensions of square matrix");
	}
	return 0;
}
	
