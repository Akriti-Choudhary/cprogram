#include <stdio.h>
int main()
{	/* wap to receive a sentence and display it */
	char arr[500];
	
	puts("enter a string \n");
	scanf("%[^\n]" ,arr);
	printf("%s\n" ,arr);
	puts("-----------------");
	scanf("%[^\n]%*c" ,arr);
	printf("%s\n" ,arr);
	//another way to get string from the user
	/*puts("-----------------");
	fgets(arr,100,stdin);
	printf("%s\n" ,arr);*/
	return 0;
}

	
	
	
