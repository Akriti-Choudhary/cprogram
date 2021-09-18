#include <stdio.h>
#include <string.h>
#define SIZE 25
int main()
{	 char str1[SIZE];
	 char str2[SIZE];
	size_t n;
	puts("Enter the first string");
	scanf("%[^\n]" ,str1 );
	puts("Enter the second string");
	scanf(" %[^\n]" ,str2);
	puts("Enter the number of characters to append");
	scanf(" %ld" ,&n);
	
	 char *str3 = strncat(str1, str2, n);
	printf("%s , \nlength of appended string : %ld \n" ,str3 ,strlen(str3));
	
	return 0;
}
