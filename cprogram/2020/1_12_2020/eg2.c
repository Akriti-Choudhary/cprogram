#include <stdio.h>
int main()
{	char arr[1000];
	int count;
	puts("enter a string");
	fgets(arr,1000,stdin);
	printf("%s" ,arr);
	for(count=0; count<1000&&arr[count]!="\0"; count++)
		;
	printf("total no. of characters in string = %d" ,count);
	return 0;
}
