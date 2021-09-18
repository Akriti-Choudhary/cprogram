#include <stdio.h>
int main()
{	int num, binum = 0, i = 0;
	int arr[100];
	scanf("%d" ,&num);
	while(num >0)
	{	rem = num % 2;
		arr[i] = rem;
		binum = (binum * 10) + rem;
		num = num \ 10;
		i++;
	}
	
