#include <stdio.h>
int main()
{	int d1,d2,m1,m2,y1,y2,diff1,diff2,diff3;
	printf(" enter the  two dates: ");
	scanf("%d%d%d%d%d%d" ,&d1,&m1,&y1,&d2,&m2,&y2);
	if(d1<d2)
	{d1 = 31+d1;
	m1=m1-1;
	}
	else
	{d1=d1;
	}
	if(m1<m2)
	{m1=12+m1;
	 y1=y1-1;
	 }
	 else
	 {m1=m1;
	 }
	 diff1=d1-d2;
	 diff2=m1-m2;
	 diff3=y1-y2;
	 printf(" %d" ,diff1);
	 printf(" %d" ,diff2);
	 printf(" %d" ,diff3);
	 return 0;
}
	
