#include <stdio.h>
int main()
{	int llim,ulim,size,i,j=0;
	printf(" enter the range and size ");
	scanf("%d%d%d" ,&llim,&ulim,&size);
	for( i=llim;i<= ulim; i++)
	{ printf(" %d" ,i);
	j++;
	if(j==size)
	{	printf("\n");
		j=0;
		
	}
	}
	printf("\n");	
	
	return 0;
}
