#include <stdio.h>
#include <ctype.h> //including character_handeling library
#include <string.h>
int main()
{	char s[100];
	puts("enter a string");
	scanf("%[^\n]" ,s);
	puts("The modified string is:");
	for(int  i = 0 ; i < strlen(s) ; i=i+2)
	{	
		printf("%c" ,toupper(s[i]));
		printf("%c" ,tolower(s[i + 1]));
	}
	puts(" :) :) :) :) ");

return 0;
}
