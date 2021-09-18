#include <stdio.h>
#define SIZE 1000
int main()
{
    int arr[SIZE];
    for(int i = 0 ; i <= SIZE; ++i)
    {
        scanf("%d" ,&arr[i]);
    }
    for(int i = 0 ; i <= SIZE; ++i)
    {
        if(arr[i] == ' ')
        printf("\n");
        else
        printf("%d" ,arr[i]);
        
    }

}