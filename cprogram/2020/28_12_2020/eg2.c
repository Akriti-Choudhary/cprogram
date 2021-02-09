#include <stdio.h>
struct value{
	int num1;
	int num2;
	int num3;
		};
int max(struct value set);
int main()
{	
	struct value set1;
	//entering the three numbers
	puts("entering the three numbers");
	scanf("%d" ,&set1.num1);
	scanf("%d" ,&set1.num2);
	scanf("%d" ,&set1.num3);
	puts(" ");
	printf(" Maximum value is %d" ,max(set1));
	return 0;
}
int max(struct value set)
{	if((set.num1 >= set.num2) && (set.num1 >= set.num3))
	{	return set.num1;
	}
	else if((set.num2 >= set.num1) && (set.num2 >= set.num3))
	{	return set.num2;
	}
	else
	{	return set.num3;
	}
}
