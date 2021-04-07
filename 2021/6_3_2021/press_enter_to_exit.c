#include <stdio.h>
#include <string.h>
int main()
{	char chaine[30];
	char c;
	printf("press enter to exit \n");
	printf("enter the string \n");
	for(int i = 1;  ; ++i)
	{   
	    scanf("%s",chaine) ;	//using scanf to read the input
	    printf("cet chaine :%s is a %ld lettered word \n",chaine, strlen(chaine));
	    
	    scanf("%c",&c);
	    if (c == '\n')
	    {	break;
	    }
	}
	return 0;
 }
