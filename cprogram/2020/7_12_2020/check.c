#include <stdio.h>
#include <string.h>
int main()
{	char arr1[500];
	char arr2[500];
	puts("enter first strings");
	scanf("%[^\n]" ,arr1);
	puts("enter second strings");
	scanf("  %[^\n]" ,arr2);
	puts("the entered strings are");
	printf(" %s \n" ,arr1);
	printf(" %s \n" ,arr2);
	return 0;
}
	
