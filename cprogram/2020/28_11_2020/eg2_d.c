#include <stdio.h>
int main()
{	int i,j,k,count=1,counter=0;
	int arr[4][4];
	for(i=0;i< 4; i++)
	{	
			if(counter%2==0)
			{	for(j=0 ;j<4;j++)
				{	arr[j][i] = count;
					count ++;
				}
			}
			else
			{	for(k=3 ;k>=0;k--)
				{	arr[k][i] = count;
					count ++;
				}
			}
		counter++;
	}	
	for(i=0;i<4; i++)
	{	for(j=0 ;j<4;j++)
		{	printf("	%d" ,arr[i][j]);
		}
		
		printf("\n");
	}
	return 0;
}
