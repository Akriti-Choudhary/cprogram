#include <stdio.h>
int main()
{	/* converting from seconds to hours:minutes:seconds */
	int time,hrs,min,sec;
	puts("enter the time in seconds");
	scanf("%d" ,&time);
	hrs = time/60;
	time = time %60;
	min = time /60;
	time = time %60;
	sec =time;
	printf(" hours:minutes:seconds \n %d:%d:%d \n" ,hrs,min,sec);
	return 0;
}
