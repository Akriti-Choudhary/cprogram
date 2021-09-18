/* PigLatin eg :jump becomes umpjay */

#include <stdio.h>
#include <string.h>
#define SIZE 50
int main()
{
	 puts("Enter a sentence to be converted in pigLatin form");
	 char string[SIZE];
	 scanf("%[^\n]" ,string);
	 
	 char *tokenPtr = strtok(string, " ");	//begin tokenizing sentence
	 
	 while(tokenPtr != NULL)
	 {
	 	for(int i = 1; i < strlen(tokenPtr) ; ++i)
	 	{	printf("%c" ,tokenPtr[i]);
	 		
	 	}
	 	printf("%c" ,tokenPtr[0]);
	 	printf("%s\n" ,"ay");	//printing pigLatin tokens
	 	tokenPtr = strtok(NULL, " ");	//get next token
	 }


}
