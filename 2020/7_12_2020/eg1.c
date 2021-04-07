#include <stdio.h>
int main()
{	int num;
	puts("enter the num");
	scanf("%d" ,&num);
	mylabel:
		if(num>2)
		{	printf(" %d" ,num-3);
			num = num - 3;
			goto mylabel;
		}
	return 0;
}
	
