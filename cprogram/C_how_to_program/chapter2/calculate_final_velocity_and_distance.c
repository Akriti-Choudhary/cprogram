#include <stdio.h>
int main()
{	/* to calculate distance covered and final velocity */
	
	int u,a,t,v,s;
	puts("enter the initial velocity in m/sec");
	scanf("%d" ,&u);
	puts("enter the acceleration in m/sec^2");
	scanf("%d" ,&a);
	puts("enter the time elapsed in sec");
	scanf("%d" ,&t);
	v= u+ a*t;
	printf("the final velocity is = %d m/s \n" ,v);
	s = u*t + 0.5 *a*t*t;
	printf(" the distance travelled is = %d m \n" ,s);
	
	return 0;
}
