#include <stdio.h>
#include <string.h>
#define SIZE 50
int main()
{
	 puts("Enter a sentence :");
	 char string[SIZE];
	 scanf("%[^\n]" ,string);
	 puts("the tokens in reverse order are :");
	 char *tokenPtr = strtok(string, " ");	//begin tokenizing sentence
	 
	 while(tokenPtr != NULL)
	 {
	 	for(int i = strlen(tokenPtr) - 1 ;i >= 0 ; --i)	//printing the reverse tokens
	 	{	printf("%c" ,tokenPtr[i]);
	 		
	 	}
	 	printf("%s" , " ");
	 	tokenPtr = strtok(NULL, " ");	//get next token
	 }
	puts(" ");

}
