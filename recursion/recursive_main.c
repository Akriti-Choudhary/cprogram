#include <stdio.h>
//recursive main for postincrement
int main()
{	static int i = 1; /* i is declared as static so that it retains it value and doesnot get initialized to 1 every time the function main is called */
	printf("%d " ,++i);
	if( i == 10 )  // to end the call
	return 0;
	main();
}

// hence we can say that main can be called recursively

