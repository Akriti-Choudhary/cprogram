#include <stdio.h>
#include <string.h>
int main()
{	//extract the 3rd ,4th and 5th character ,should not include space
	char arr[500];
	int count=0;
	char c;
	puts("enter the string");
	scanf("%[^\n]" ,arr);
	for(unsigned int i=2; i < strlen(arr) ;i++)
	{	c = arr[i] ;
		if(c == 32)
		{	i++;
		}
		else 
		{	printf("%c" ,arr[i]);
			count++;
		}
		if(count==3)
		{	break;
		}
	}
	return 0;
}
		
