#include <stdio.h>
#include <string.h>
int main()
{	int count;	
	char arr1[500];
	char arr2[500];	
	puts("enter the string");
	scanf("%s" ,arr1);
	int length = strlen(arr1);
	count=  length-1;
	for( unsigned int i = 0 ;i <= length-1; i++)
	{	arr2[count] = arr1[i];
		count--;
	} 
	
	printf("%s" ,arr2);
	
	return 0;
}
