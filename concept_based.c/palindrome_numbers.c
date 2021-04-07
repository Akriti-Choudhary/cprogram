#include <stdio.h>
int reverse(int n);
int main()
{	int num;
	puts("enter the number");
	scanf("%d" ,&num);
	if(reverse(num) == num)
	{
		puts("the entered number is a palindrome number");
	}
	else
	{
		puts("the entered number is NOT a palindrome number");
	}	

	return 0;
}
int reverse(int n)
{
	int r ,rev_num=0;
	while(n > 0)
	{	r =  n % 10;
		rev_num = rev_num * 10 + r;
		n = n / 10;
	}
	return rev_num;
	
}
