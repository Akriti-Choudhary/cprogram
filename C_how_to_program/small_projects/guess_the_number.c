//Randomizing the guess the number
#include <stdio.h>
#include <stdlib.h>
int main()
{	int num ;
	unsigned int seed;
	char reply;
	start1:
	puts("enter the integer to seed");
	scanf("%u" ,&seed);
	srand(seed);	//seed the random number generator
	int comp_choice = 1 + (rand() % 1000); 

	start2:
	
	puts("I have a number between 1 to 1000  \n""Can you guess my number ? \n""please type your  guess (press -1 to exit)");
	
	scanf("%d" ,&num);
	if(num == -1)
	{	printf("the game has been ended by the user \n");
	}
	else
	
	{	if(comp_choice == num)
		{	printf("Excellent! You guessed the number ! \n");
			printf("Would you like to play again ( y or n)? \n");
			scanf(" %c" ,&reply);
			if( reply == 'y')
			{	goto start1 ;
			}
		}
		else if ( comp_choice > num)
		{	printf("Too low. Try again. \n");
			goto start2;
		}
		else 
		{	printf("Too high. Try again. \n");
			goto start2;
		}
	}
		
	return 0;
}
