#include <stdio.h>
int main()
{	
	for(unsigned int i =1; i<=500; i++)
	{	printf(" $ ");
		for(unsigned int j =50; j<=500; j+=50)
		{	if(i==j)
			{	printf("\n");
			}
		}
	}
	return 0;
}
