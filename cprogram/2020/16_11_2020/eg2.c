#include <stdio.h>
int main()
{ int i ,lim ,a=1;
	printf(" enter the limit");
	scanf("%d" ,&lim);
	int b = lim;
	for(i=1; i<= lim; i++)
	{	if(i%2 != 0)
		{printf(" %d" ,a);
		a++;
		}
		else
		{ printf(" %d" ,b);
		  b--;
		 }
	}
	return 0;
}
