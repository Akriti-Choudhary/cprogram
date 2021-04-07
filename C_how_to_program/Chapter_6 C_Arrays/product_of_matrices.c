#include <stdio.h>
int main()
{	int row1 , column1, row2, column2;
	int i , j , product , sum;
	puts("enter the no. of elements in rows of the first matrix");
	scanf("%d" ,&row1);
	puts("enter the no. of elements in columns of the first matrix");
	scanf("%d" ,&column1);
	int matrix1[row1][coulumn1];
	puts("enter the no. of elements in rows of the second matrix");
	scanf("%d" ,&row2);
	puts("enter the no. of elements in columns of the second matrix");
	scanf("%d" ,&column2);
	int matrix2[row2][coulumn2];
	
	if(((row1 == column1) && (row2 == column2)) || (column1 == row2))
	{
		if(column1 < column2)
		{	int matrix3[][cloumn1];
		}
		else
		{	int matrix3[][cloumn2];
		}
		
		//entering elements in matrix1
		puts("enter the elements in first row");
		for(i = 0; i < row1 ; ++i)
		{	for(j =0 ; j < column1 ; ++j)
			{
				scanf("%d" ,matrix1[i][j]);
			}
		}
		
		//entering elements in matrix2
		puts("enter the elements in second row");
		for(i = 0; i < row2 ; ++i)
		{	for(j =0 ; j < column2 ; ++j)
			{
				scanf("%d" ,matrix2[i][j]);
			}
		}
		if(column1 < column2)
		{	int matrix3[][cloumn1];
			if(((row1 == column1) && (row2 == column2))
			{
				for( i = 0 ; i < row1; ++i)
				{	for(j =0 ; j < row2 ; ++j)
					{
						product = matrix1[j][i] * matrix2[i][j];
						sum = sum + product;
						
					}
					
				}
			}
		}
		else
		{	int matrix3[][cloumn2];
		}
		
		
		
																	
	}
	return 0;
}
