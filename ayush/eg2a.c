#include <stdio.h>
#include<string.h>
int main()
{	char arr1[100] = {'A','Y','U','S','H'};
	char arr2[100] ;
	int count =0;
	for(int i=0; i< 1000;i++)
	{	arr2[i] = arr1[count];
		for(int j=0;j<=8 ;j++)
		{	arr2[i+j] = ' ';	
		}
		count++;
	}
	printf("%s" ,arr2);
	return 0;
}
