#include <stdio.h>

int ay_prime(int ay_x,int ay_y);

int main()
{	int ay_num1,ay_num2;//function declaration
	puts("enter the limits");
	scanf("%d%d" ,&ay_num1,&ay_num2);
	int counter = ay_prime(ay_num1,ay_num2); //function call
	printf("the no. of prime nos. between the range %d and %d = %d" ,ay_num1,ay_num2,counter);
	return 0;
}
int ay_prime(int ay_x,int ay_y)
{	int count=0;
	int ay_c=0;
	/*for(int ay_i= ay_x; ay_i <= ay_y; ay_i++)
	{	for(int ay_j =1; ay_j<=ay_i; ay_j++)
		{	if( ay_i % ay_j == 0)
			{	ay_c++;
			}
		}
		if(ay_c == 2)
		{	count++; //count for prime numbers
		}
	}*/
	while(ay_x<=ay_y)
	{	for(int i= 1; i<= ay_x; i++)
		{	if(ay_x%i ==0)
			ay_c++;
		}
		if (ay_c==2)
		count ++;
		ay_x++;
	}
	return count;
}
