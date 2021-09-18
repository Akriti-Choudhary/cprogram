#include <stdio.h>
#include <stdlib.h>
#define size 10
 
void push(int *arr , int *ptr_ptr);
int pop(int *arr , int *ptr_ptr);
int display(int *arr , int *ptr_ptr);
int peak(int *arr , int *ptr_ptr);

int main()
{
	int arr[10];
	int ptr = -1;
	int *ptr_ptr = &ptr;
	int ch = -1;
	
		system("clear");
		while(ch != 0)
		{	
			printf("Enter your choice \n 1: push \n 2: pop \n 3: display \n 4 : peak \n0 : to end the program \n");
			scanf("%d", &ch);
			if(ch >=0 && ch <= 4){
				switch (ch)
				{	case 1: 	push(arr , ptr_ptr); 
							break;
						
					case 2 : 	pop(arr, ptr_ptr);
							break;
						 
					case 3 : 	display(arr , ptr_ptr);
							break;
						
					case 4 : 	peak(arr , ptr_ptr);
							break;
						 
					default  : printf("enter a valid choice");
				}
			}else{
				printf("enter a valid choice");
			}
		}
}

void push(int *arr ,int *ptr_ptr)
{
	if(*ptr_ptr < size)
	{	puts("enter an integer to push data");
		*ptr_ptr++ ;
		scanf("%d" ,&arr[*(ptr_ptr)]);
	}
	else
	{
		printf("stack overflow");
	}

}

int pop(int *arr , int *ptr_ptr)
{	
	
	if(*ptr_ptr > -1)
	{	puts("an integer to is being poped");
		int var = arr[*ptr_ptr];
		*ptr_ptr-- ;
	}
	else
		puts("Stack overflow");
}

int display(int *arr , int *ptr_ptr)
{	
	for(int i = *ptr_ptr; i >= 0; --i)
	{	
		printf("%d " ,arr[i]);
	}
	printf("\n");
}	 

int peak(int *arr , int *ptr_ptr)
{	printf("%d " , *arr[*ptr_ptr]);
	puts(" ");
}
 
