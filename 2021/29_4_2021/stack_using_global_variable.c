#include <stdio.h>
#include <stdlib.h>

int arr[10];
int ptr = -1, size = 10;
int push();
int pop();
int display();
int peak();

int main()
{
	int ch = -1;
	
		system("clear");
		while(ch != 0)
		{	
			printf("enter your choice \n 1: push \n 2: pop \n 3: display \n 4 : peak \n0 : to end the program \n");
			scanf("%d", &ch);
			if(ch >=0 && ch <= 4){
				switch (ch)
				{	case 1: 	push(); 
							break;
						
					case 2 : 	pop();
							break;
						 
					case 3 : 	display();
							break;
						
					case 4 : 	peak();
							break;
						 
					default  : printf("enter a valid choice");
				}
			}else{
				printf("enter a valid choice");
			}
		}
}

int push()
{
	if(ptr < size)
	{	puts("enter an integer to push data");
		ptr++;
		scanf("%d" ,&arr[ptr]);
	}
	else
	{
		printf("stack overflow");
	}

}

int pop()
{	
	
	if(ptr > -1)
	{	puts("an integer to is being poped");
		int var = arr[ptr];
		ptr-- ;
	}
	else
	puts("Stack overflow");
}

int display()
{	
	for(int i = ptr; i >= 0; --i)
	{	
		printf("%d " ,arr[i]);
	}
		printf("\n");
}	 

int peak()
{	printf("%d " ,arr[ptr]);
	puts(" ");
}

