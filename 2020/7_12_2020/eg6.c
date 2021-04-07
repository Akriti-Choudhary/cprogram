#include <stdio.h>
#include <string.h>
int main()
{	int initial,count=0;	
	char arr1[500];
	char arr2[500];	
	puts("enter the string");
	scanf("%s" ,arr1);
	int length = strlen(arr1);
	initial = (length-1)/2;
	for( unsigned int i = initial+1 ;i < length; i++)
	{	arr2[count] = arr1[i];
		count++;
	} 
	for( unsigned int i = 0 ;i <= initial; i++)
	{	arr2[count] = arr1[i];
		count++;
	} 
	printf("%s" ,arr2);
	
	return 0;
}
