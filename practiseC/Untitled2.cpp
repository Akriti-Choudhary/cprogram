#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch, s, sen;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%c" ,&ch);
    scanf("%s" ,s);
    scanf("%[^\n]" ,sen);   
    printf("%c \n" ,ch);
    printf("%s \n" ,s);
    printf("%s" ,sen);
    
    return 0;
}
