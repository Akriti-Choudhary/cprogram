#include <stdio.h>
int main()
{	int a=100,p=2500,currNum, revNum=0, rem=0, i=a;
	while(i<=p)
	{
		currNum=i;
		revNum=0;
		while(currNum)
		{
			rem = currNum% 10;
			revNum = revNum * 10 + rem;
			currNum = currNum / 10;
		}
		if(revNum == i)
		{	
			printf(" %d" ,revNum);
		}
		i++;
	}
	return 0;
}
