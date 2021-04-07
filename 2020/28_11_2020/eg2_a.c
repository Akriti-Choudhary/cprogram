#include <stdio.h>
int main()
{	int i,j,count=1;
	int arr[4][4];
	for(i=0;i< 4; i++)
	{	for(j=0 ;j<4;j++)
		{	arr[j][i] = count;
			count ++;
		}
	}
	for(i=0;i< 4; i++)
	{	for(j=0 ;j<4;j++)
		{	printf("	%d" ,arr[i][j]);
		}
		
		printf("\n");
	}
	return 0;
}
