#include <stdio.h>
#include <string.h>
int main()
{	int size;
	char arr1[50] = " My name is Akriti";
	char arr2[50] = " I am a girl";
	printf("array 1 is - %s \n" ,arr1);
	printf("array 2 is - %s \n" ,arr2);
	// array 1 is copied to 2
	strcpy(arr1,arr2);
	puts("copied string is");
	printf("  %s" ,arr1);
	return 0;
}
