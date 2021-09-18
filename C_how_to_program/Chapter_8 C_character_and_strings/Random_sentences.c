#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int main()
{	srand(time(NULL));
	char *article[] = {"the" ,"a" ,"one" ,"some" ,"any"};
	char *noun[] = {"boy" ,"girl" ,"dog","town" ,"car"};
	char *verb[] = {"drove" ,"jumped" ,"ran","walked","skipped"};
	char *prepositions[] = {"to","from","over","under","on"};
	int r1, r2, r3, r4, r5 ,r6;
	
	r1 = rand() % 5;r2 = rand() % 5;r3 = rand() % 5;r4 = rand() % 5;r5 = rand() % 5;
	r6 = rand() % 5;
	printf("%s %s %s %s %s %s \n" ,article[r1],noun[r2],verb[r3],prepositions[r4],article[r5],noun[r6]);
	
	return 0;
}
