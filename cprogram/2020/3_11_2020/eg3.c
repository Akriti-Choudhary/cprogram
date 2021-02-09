#include <stdio.h>
int main()
{	int a=100,p=2500,currnum,rev,rem;
	while(a<=p)
	{currnum=a;
	rev=0;
	while(currnum)
	{rem=currnum % 10;
	rev=rev*10+rem;
	currnum=currnum/10;
	}
	if( rev==a)
	{printf(" %d" ,rev);
	}
	a++;
	}
	return 0;
}
	
	

