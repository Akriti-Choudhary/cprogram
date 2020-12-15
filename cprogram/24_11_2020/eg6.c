#include <stdio.h>
int main()
{	/*if the sum of all the rows and columns individually and the sum of the diagonal are equal the display magic square */	
	int row,colm,r,c,i,j;
	puts("enter the no. of rows and columns of the 2-D array");
	scanf("%d%d" ,&row,&colm);
	puts("enter the elements of the array");
	int arr[row][colm];
	for( i=0;i<row;i++)
	{	for( j=0; j< colm; j++)
		{	scanf(" %d" ,&arr[i][j]);
		}
	}
	printf("the no. of rows = %d \n the no. of columns = %d \n" ,row,colm);
	puts("Array-");
	for( i=0;i<row;i++)
	{	for( j=0; j< colm; j++)
		{	printf(" %d" ,arr[i][j]);
		}
		printf("\n");
	}
	puts("enter the row no. and column no.");
	scanf("%d%d" ,&r,&c);
	for(i= r-1;i< r+2;i++);
	{	for( j=c-1;j< c+2;j++)
		{	
				printf(" %d" ,arr[i][j]);	
			
		}
		printf("\n");
	}
	return 0;
}
