#include <stdio.h>
#include <string.h>
int main()
{	char arr1[500];
	char arr2[500];
	int length,initial,count=0;
	puts("enter the string");
	scanf("%s" ,arr1);
	length = strlen(arr1);
	initial = (length-1)/2;
	puts("the modified string is ");
	for(unsigned int i = length-1 ; i > initial; i--)
	{	arr2[count] = arr1[i];
		count++;
	}
	for(unsigned int i = initial+1; i > 0; i--)
	{	arr2[count] = arr1[i-1];
		count++;
	}
	printf("%s" ,arr2);
	return 0;
}
