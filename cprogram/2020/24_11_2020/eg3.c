#include <stdio.h>
int main()
{	/* display the sum of each row and each column*/
	int row,colm,sum_r=0,sum_c=0;
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
	for(int i=0;i<row;i++)
	{	for(int j=0; j< colm; j++)
		{	sum_r= sum_r + arr[i][j];
		}
		printf("sum of %d row is = %d \n" ,i+1,sum_r);
		sum_r=0;
	}
	for(int i=0;i<colm;i++)
	{	for(int j=0; j< row; j++)
		{	sum_c= sum_c + arr[j][i];
		}
		printf("sum of %d column is = %d \n" ,i+1,sum_c);
		sum_c=0;
	}
	
	
	return 0;
}

