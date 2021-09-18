#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{	char S[1000];	   //an array to store the entered string
	int arr[10] ={0}; //an array to store the digit count
	int y = 0;
	scanf("%s" ,S); 
	while(y <= 9)
   	{    for(int i = 0 ; i < (strlen(S) *strlen(S)) ; ++i) 
             {
            	if(S[i] - '0' == y )
            	{
                	++arr[y] ;
            	}
             }	
             ++y;
   	}
   	for(int j = 0 ; j < 10 ; ++j)	//for printing the digit count array
   	{
       	printf("%d " ,arr[j]);
   	} 
   	 return 0;
}
