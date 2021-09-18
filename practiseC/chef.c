#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int T; unsigned int N;
	int i ,j ;
	int count = 0 ;
	char str[10000];
	scanf("%d" ,&T);
	for(i = 1; i <= T ; ++i)
	{   
	    for( j = 0; j < 1000 ; ++j)
	    {   scanf(" %[^\n]" ,str[j]);
	        
	    }
	    for( j = 0; j < 100 ; ++j)
	    {   if((str[i] == 1) & (str[i+1] == 0))
	        { count++;
	        }
	    }
	    printf("%d \n" ,count);
	    
	}
	count = 0;
	
	return 0;
}


