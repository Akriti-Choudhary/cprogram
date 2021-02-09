#include <stdio.h>
int main()
{	/* to subtract one pointer to another that points two different variables */	
	int a = 5;
	int arr = 3;
	int arrr = 10;
	int* aptr = &a;
	int* arrptr = &arr;
	int* arrrptr = &arrr;
	printf("aptr= %p \n arrptr = %p \n arrrptr = %p" ,aptr , arrptr, arrrptr);
	int difference1 = arrptr - aptr;
	printf(" \n difference1 (arrptr - aptr)= %d" ,difference1);
	printf(" \n difference2 ( arrrptr - aptr) = %lu" , arrrptr - aptr);
	printf(" \n difference2 ( arrrptr - arrptr) = %lu" , arrrptr - arrptr);

	return 0;
}

