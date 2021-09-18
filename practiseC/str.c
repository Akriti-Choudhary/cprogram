#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[1000];
    int i;
    for( i =0; i < strlen(str) ; ++i)
    {
        scanf("%[^\n]" ,str);
        
    }
    for( i =0; i < strlen(str) ; ++i)
    {
        if(isspace(str[i]) != 0)
       {
		 printf("\n");
	}
        else
        {
		printf("%c" ,str[i]);
	}
        
    }
    return 0;
}
