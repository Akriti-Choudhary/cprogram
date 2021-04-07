#include <stdio.h>

void tri_asterisk( int num , char fillCharacter);

int main()
{	int num;
	char fillCharacter;
	puts(" enter the number of lines");
	scanf("%d" ,&num);
	puts(" enter the character you would like to get printed");
	scanf(" %c" ,&fillCharacter);
	tri_asterisk(num, fillCharacter);
	return 0;
}
void tri_asterisk( int num , char fillCharacter)
{	for(int i = 1; i <= num; ++i)
	{	for(int j = 1; j <= i ; ++j)
		{	printf("%c" ,fillCharacter);
		}
		printf("\n");
	}
}
	
