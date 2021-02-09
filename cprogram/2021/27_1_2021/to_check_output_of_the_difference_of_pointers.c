#include <stdio.h>
int main()
{	/* to subtract one pointer to another that points an array */	
	int arr[5] = { 100,45,667,9,21};
	int* aptr = arr;
	int* arrptr = &arr[4];
	int difference = arrptr - aptr;
	printf("%d" ,difference);
	return 0;
}

