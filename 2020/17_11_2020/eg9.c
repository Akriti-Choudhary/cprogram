#include <stdio.h>
int main()
{	int i,j,a=15,b=7;
	for(i=5;i>=1;i--)
	{	if(i%2!=0)
		{	for(j=1;j<=i;j++)
			{	printf(" %d" ,a);
				a=a-1;
			}
			a=a-i+1;
		}
		else
		{	for(j=1;j<=i;j++)
			{	printf(" %d" ,b);
				b++;
			}
		b=b-(2*i)-1;
		}
		
		printf("\n");
	}
	return 0;
}	
