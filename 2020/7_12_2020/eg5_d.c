#include <stdio.h>
#include <string.h>
int main()
{	// to compare the two string
	int length1,length2,result;
	char arr1[500];
	char arr2[500];
	puts("enter the first string");
	scanf("%[^\n]" ,arr1);
	length1 = strlen(arr1);
	
	puts("enter the second string");
	scanf("%s" ,arr2);
	length2 = strlen(arr2);
	
	if(length1 != length2)
	{	printf("the strings are not equal");
	}
	else
	{	result = strcmp(arr1,arr2);
	}
	printf("%d" ,result);
	
	return 0;
}
