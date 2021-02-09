#include <stdio.h>
#include <string.h>
int main()
{	// to calculate the length of the string
	char arr[500];
	int length ;
	puts("enter the string");
	scanf("%[^\n]" ,arr);
	length = strlen(arr);
	printf("the length of the array is - %d " ,length);
	return 0;
}
