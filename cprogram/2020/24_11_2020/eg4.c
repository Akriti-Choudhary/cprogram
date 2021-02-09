#include <stdio.h>
int main()
{	/* display the diagonal of the 2D square matrix*/	
	int row,colm,sum_r=0,sum_c=0;
	puts("enter the equal no. of rows and columns of the 2-D square matrix");
	scanf("%d%d" ,&row,&colm);
	if(row==colm)
	{	puts("enter the elements of the array");
		int arr[row][colm];
		for(int i=0;i<row;i++)
		{	for(int j=0; j< colm; j++)
			{	scanf(" %d" ,&arr[i][j]);
			}
		}
		printf("the no. of rows = %d \n the no. of columns = %d \n" ,row,colm);
		puts("the entered array is");
		for(int i=0;i<row;i++)
		{	for(int j=0; j< colm; j++)
			{	
				printf(" %d" ,arr[i][j]);
			}
			printf("\n");
		}
		puts("the diagonal of the entered array is");
		for(int i=0;i<row;i++)
		{	for(int j=0; j< colm; j++)
			{	if(i==j)
				{	printf(" %d" ,arr[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}

