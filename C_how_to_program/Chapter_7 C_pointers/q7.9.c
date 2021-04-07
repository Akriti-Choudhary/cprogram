#include <stdio.h>
#define SIZE 10
int main()
{
	int oddnum[SIZE] = {1 , 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int *iPtr = &oddnum[0];
	puts("printing elements using array index notation");
	for(int i = 0; i < SIZE ; ++i)
	{
		printf("%d " ,oddnum[i]);
	}
	puts(" ");
	puts("--------------------------------- ");
	
	puts("printing elements using pointer/offset notation");
	for(int i = 0; i < SIZE ; ++i)
	{
		printf("%d " ,*(iPtr + i));
	}
	puts(" ");
	puts("--------------------------------- ");
	puts("printing elements using pointer/offset notation using array name as the pointer");
	for(int i = 0; i < SIZE ; ++i)
	{
		printf("%d " ,*(oddnum + i));
	}
	puts(" ");
	puts("--------------------------------- ");
	puts("printing elements of array by indexing the pointer to the array");
	for(int i = 0; i < SIZE ; ++i)
	{
		printf("%d " ,iPtr[i]);
	
	}
	puts(" ");
	puts("--------------------------------- ");
	return 0;
}
	
