#include <stdio.h>
#include <string.h>
#define SIZE 500
int main()
{
	int k,i,j,c=0;
	char arr1[] = "AKRITI CHOUDHARY ";
	char arr2[SIZE];
	char arr3[strlen(arr1)];
	puts("enter the value of k");
	scanf("%d" ,&k);
	for(i=0; i< SIZE -1; i = i+k+1)
	{
		if(c < strlen(arr1)-1)
		{
			arr2[i] = arr1[c];
			for( j = i+1 ; j <=i+k; j++ )
			{
				arr2[j] = ' ';
			}
			c++;
		}
	}
	arr2[strlen(arr1)*k +1] = '\0';
	printf("%s \n" ,arr2);
	for(i=0;i< strlen(arr1); i++)
	{
		if(arr1[i] != ' ')
		{
			arr3[i] = arr1[i];
		}
		else
		arr3[i] = 'A';
	}	
		printf("%s \n" ,arr3);
	
	
	return 0;
	
	
}
