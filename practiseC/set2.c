/*Question 2- There is a grid of size 10^5 * 10^5, covered compeletly in railway tracks.Tom is riding in a train ,currently in cell(a,b),and Jerry is tied up in a different cell(c,d),unable to move. The train has no breaks . It shall move exactly K steps ,and then its fuel will run out and it shall stop.In one step , the train must move to one of its neighboring cells, sharing a side. Tom can't move without the train ,as the grid is covered in tracks.Can Tom reach Jerry in exactly K steps?
note - Tom can go back to same cell multiple times */  
#include <stdio.h>
#include <math.h>
int main(){
	unsigned long int  T, a, b, c, d , K ,X;
	scanf("%lu" ,&T); //entering number of test cases
	for(unsigned long int i =1; i <= T; ++i){
		scanf("%lu%lu%lu%lu%lu" ,&a,&b,&c,&d,&K);
		X = abs( c - a) + abs( d - b);
		 if((( X < K) && ((X % 2) == (K % 2))) || (X == K)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
		
