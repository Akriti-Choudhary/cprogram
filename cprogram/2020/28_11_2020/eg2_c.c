#include <stdio.h>
int main()
{	int i,j,p,count1=1,count2=8;	
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	for(i=0;i<2;i++)
		{	for(j=0;j<4;j++)
			{	printf("	%d " ,count1);
				count1++;
			}
			printf("\n");
			count1=count1+4;
			for(p=3;p>=0;p--)
			{	printf("	%d " ,count2);
				count2--;
			}
			count2=count2 + 12;
			printf("\n");
		}
		return 0;
}
	
