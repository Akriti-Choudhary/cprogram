#include <stdio.h>
int main()
{//enter two dates and print the date coming first
	int d,m,y, dd,mm,yy;
	printf("%d%d%d%d%d%d" ,d,m,y,dd,mm,yy);
	scanf("%d%d%d%d%d%d" ,&d,&m,&y,&dd,&mm,&yy);
	if((yy >= y) && ( mm >= m) && (dd >= d))
	{printf("%d %d %d" , d, m, y);
	}
	else
	{printf("%d %d %d" , dd, mm, yy);}
	
	return 0;
}
