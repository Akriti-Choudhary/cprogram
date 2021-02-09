#include <stdio.h>
int main()
{	int a=200;
	while(a<= 3000)
	{if((a%3==0)&&(a%8==0))
	 {printf("  %d" ,a);
	 }
	 a++;
	 }
	 return 0;
}
