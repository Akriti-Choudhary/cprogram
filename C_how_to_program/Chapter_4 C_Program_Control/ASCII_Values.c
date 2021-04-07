#include<stdio.h>
int main()
{
	for (int i = 0; i <= 127 ; ++i)
	{	
		if(i <= 32)
		{	printf("%5d = %d " ,i ,i);
		}
		else
		{	printf("%5d = %c " ,i ,i);
		}
		if( i % 10 ==0)
		{	printf("\n");
		}
	}
	return 0;
}
	
