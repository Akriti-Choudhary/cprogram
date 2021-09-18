#include <stdio.h>
#include <string.h>
int main()
{
	puts("Enter the phone number in the format :");
	puts( "Area code (consist of three digit)-(seperated by an hypen(delimiter))phone number(consist of seven digit)");
	char arr[8];
	char *remainder1;
	char *remainder2;
	scanf("%s" ,arr);
	char *tokenPtr = strtok(arr , "-");
	printf("area-code : %s\n" ,tokenPtr);
	tokenPtr = strtok(NULL, " ");
	printf("phone number : %s \n" ,tokenPtr);
		
}
