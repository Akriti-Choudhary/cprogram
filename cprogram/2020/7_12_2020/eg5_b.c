#include <stdio.h>
#include <string.h>
int main()
{	int size;
	char arr1[50] = " My name is Akriti";
	char arr2[50] = " I am a girl";
	printf("array 1 is - %s \n" ,arr1);
	printf("array 2 is - %s \n" ,arr2);
	// array 1 is appended with 2
	
	puts("appended string is");
	printf("%s" ,strcat(arr1,arr2));
	return 0;
}
