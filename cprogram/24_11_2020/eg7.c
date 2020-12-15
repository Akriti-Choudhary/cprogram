#include <stdio.h>
int main()
{	int sum_r1=0,sum_c1=0,sum_r2=0,sum_c2=0,sum_r3=0,sum_c3=0,sum_d=0;
	
	puts("enter the elements of the array");
	int arr[3][3];
	for(int i=0;i<3;i++)
	{	for(int j=0; j< 3; j++)
		{	scanf(" %d" ,&arr[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{	for(int j=0; j< 3; j++)
		{	printf(" %d" ,arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{	for(int j=0; j< 3; j++)
		{	if(i==0)
			{sum_r1= sum_r1 + arr[i][j];
			}
			else if(i==1)
			{sum_r2= sum_r2 + arr[i][j];
			}
			else
			{	sum_r3= sum_r3 + arr[i][j];
			}
		}
	}
		printf("sum of 1st row is = %d \n" ,sum_r1);
		printf("sum of 2nd row is = %d \n" ,sum_r2);
		printf("sum of 3rd row is = %d \n" ,sum_r3);
		
	
	for(int i=0;i< 3;i++)
	{	for(int j=0; j< 3; j++)
		{	if(i==0)
			{	sum_c1= sum_c1 + arr[j][i];
			}
			else if(i==1)
			{		sum_c2= sum_c2 + arr[j][i];
			}
			else
			{	sum_c3= sum_c3 + arr[j][i];
			}
		}
	}
		printf("sum of 1st column is = %d \n" ,sum_c1);
		printf("sum of 2nd column is = %d \n" ,sum_c2);
		printf("sum of 3rd column is = %d \n" ,sum_c3);
		
	for(int i=0;i<3 ;i++)
	{	for(int j=0; j< 3; j++)
		{	if(i==j)
			{	sum_d=sum_d+ arr[i][j];
			}
		}
	}
	printf("sum of diagonal = %d" ,sum_d);
	if((sum_r1==sum_r2)&&(sum_r2==sum_r3)&&(sum_r3==sum_c1)&&(sum_c1==sum_c2)&&(sum_c2==sum_c3)&&(sum_c3==sum_d))
	{	puts("\n it is a magic square");
	}
	else
	{	puts("\n it is not a magic square");
	}
	return 0;
}

