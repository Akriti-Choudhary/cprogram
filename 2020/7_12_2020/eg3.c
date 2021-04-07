#include <stdio.h>
int main()
{	//display each digit	
	int num,rem;
	puts("enter the num");
	scanf("%d" ,&num);
	seperate:
		while(num > 0)
		{	rem = num % 10;
			printf(" %d\n" ,rem);
			num = num/10;
			goto seperate;
		}
	return 0;
}
	
