#include <stdio.h>
int main()
{	int count=0;
	int rem,num;
	puts("enter the decimal no.");
	scanf("%d" ,&num);
	int arr[32];
	while(num > 0)
	{	rem= num%2;
		arr[count]=rem;
		count++;
		num=num/2;
	}
	puts("the binary equivalent is");
	for(int i=count-1; i>= 0; i--)
	{	printf("%d" ,arr[i]);
	}
	return 0;
}
