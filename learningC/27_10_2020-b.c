#include <stdio.h>
int main()
{	int h1,h2,m1,m2,diff1,diff2;
	printf("enter the two timings first enter the hrs followed by min.");
	scanf("%d%d%d%d" ,&h1,&m1,&h2,&m2);
	if(m2>m1)
	{m1=60+m1;
	 h1=h1-1;
	 }
	 diff1=h1-h2;
	 diff2=m1-m2;
	 printf("%d" ,diff1);
	 printf(": %d" ,diff2);
	 return 0;
}
