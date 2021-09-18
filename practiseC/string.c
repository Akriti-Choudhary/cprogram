#include <stdio.h>
int main()
{
	char str[1000];
	int i,j,T;
	scanf("%d" ,&T);
	for(i = 1; i <= T ; ++i)
	{
		for(j = 0; j < 1000; ++j )
		{
			scanf("%c" ,str);
		}
		for(j = 0; j < 1000; ++j )
		{
			if(j%2 == 0)
			printf("%c" ,str[j]);
		}
		printf(" ");
		for(j = 0; j < 1000; ++j )
		{
			if(j%2 != 0)
			printf("%c" ,str[j]);
		}
		
	}
	return 0;
}
