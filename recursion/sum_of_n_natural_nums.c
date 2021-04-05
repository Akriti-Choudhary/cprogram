#include <stdio.h>
// add first n natural numbers using recursion
int total(int num);
int main()
{	int num;
	puts(" enter the limit ");
	scanf("%d" ,&num);
	printf("the sum of first n natural numbers = %d \n" ,total(num));
	return 0;
}

int total(int num)
{
	if(num == 1)
	return 1;
	else
	return (total(num -1) + num);
}
