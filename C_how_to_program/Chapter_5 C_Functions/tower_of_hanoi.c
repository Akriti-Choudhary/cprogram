/* Tower of Hanoi */
//initial peg = A , auxillary peg = B , destination peg = C
#include <stdio.h>
void hanoi(int n , char A ,char C, char B)
{
	if(n == 0)
	{
		return;
	}
	hanoi(n-1 ,A ,B ,C);
	
	printf("Move 1 disk from %c to %c \n" ,A ,C);
	
	hanoi(n-1, B , C, A);
}
int main()
{
	int n;
	char A = 'A',C = 'C' ,B = 'B';
	puts("enter the number of disks");
	scanf("%d" ,&n);
	hanoi(n ,A ,C,B);

}
