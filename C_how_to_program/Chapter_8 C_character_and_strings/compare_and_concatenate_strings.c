#include <stdio.h>
#include <string.h>
#define SIZE 25
int main()
{	char str1[SIZE];
	char str2[SIZE];
	puts("Enter the first string");
	scanf("%[^\n]" ,str1 );
	puts("Enter the second string");
	scanf(" %[^\n]" ,str2);
	
	if(strcmp(str2 ,str1) > 0)
	{	
		char *str3 = strcat(str2,str1);
		printf("%s \n" ,str3);
	}
	else if(strcmp(str1 ,str2) < 0)
	{
		char *str3 = cat(str1 ,str2);
		printf("%s \n" ,str3);
	}
	else
	{
		puts("Strings are same");
	}
	return 0;
}
