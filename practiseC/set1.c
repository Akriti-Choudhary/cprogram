/* Question - You and your friend are playing a game with hoops. There are N hoops(where N is odd) in a row.
You jump into loop 1, and your friend jumps into loop N . Then you jump into hoop 2, and after that , your friend jumps into hoop N-1,and also on.The process ends when someoone cannot make the next jump because the hoop is occupied by the other person.Find the last hoop that will be jumped
*/

#include <stdio.h>
int main(){
	unsigned long int T ,N ,count = 0;
	scanf("%lu" ,&T);
	for(unsigned long int i = 0; i < T ; ++i){
		scanf("%lu" ,&N);
		if(N % 2 != 0){
			printf("%lu\n" ,((N-1)/2)+1);
			}count++;
		}
	
return 0;
}
