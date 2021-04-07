//to read specific characters from scanf
#include <stdio.h>
int main()
{	char c;
	puts("enter a character to be printed");
	scanf(" %c" ,&c);	//using scanf to read the input
	puts("The entered character was");
	printf("%c \n" ,c);	//printing the entered character
	
	return 0;
}
