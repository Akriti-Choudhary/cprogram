#include <stdio.h>
#include <ctype.h>
int main()
{	char ch;
	puts("Enter a character");
	scanf("%c" ,&ch);
	printf(" " ,(isblank(ch)) ? (printf("a blank character")) : (printf("not a blank character")));
	puts(" ");
	
	printf(" " ,(isdigit(ch)) ? (printf(" character is a digit")) : (printf("not a digit")));
	puts(" ");
	
	printf(" " ,(isalpha(ch)) ? (printf("character is an alphabet")) : (printf("not an alphabet")));
	puts(" ");
	
	printf(" " ,(isalnum(ch)) ? (printf("character is an alphabet or a digit")) : (printf("not an alphabet or a digit")));
	puts(" ");
	
	printf(" " ,(isxdigit(ch)) ? (printf("character is a hexadecimal digit")) : (printf("not a hexadecimal digit")));
	puts(" ");
	
	printf(" " ,(islower(ch)) ? (printf("character is a lower case letter")) : (printf("not a lower case letter")));
	puts(" ");
	
	printf(" " ,(isupper(ch)) ? (printf("character is an upper case letter")) : (printf("not an upper case letter")));
	puts(" ");

	printf("the lower case character is : %c" ,tolower(ch));
	puts(" ");
	
	printf("the upper case character is : %c" ,toupper(ch));
	puts(" ");
	
	printf(" " ,(isspace(ch)) ? (printf("character is a whitespace character")) : (printf("not a whitespace character")));
	puts(" ");
	
	printf(" " ,(iscntrl(int(ch)))?(printf("character is a control character")):(printf("not a control character")) );
	puts(" ");
	
	printf(" " ,(ispunct(ch)) ? (printf("character is a printing character other than a space, a digit or a letter")) : (printf("not a a printing character other than a space, a digit or a letter")));
	puts(" ");
	
	printf(" " ,(isprint(ch)) ? (printf("character is a printing character including a space")) : (printf("not a printing character including a space")));
	puts(" ");
	
	printf(" " ,(isgraph(ch)) ? (printf("character is a printing character excluding a space")) : (printf("not a printing character excluding a space")));
	puts(" ");
		
	return 0;
}
