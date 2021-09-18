/*It's chef's birthday.He and his twin have received N gifts in total.

*/
#include <stdio.h>
int main(){
	int T;
	scanf("%d" ,&T); //enter number of test cases
	int N,K ;
	for(int i = 1; i <= T ;++i){
		scanf("%d%d" ,&N,&K);
		int A[N] ;
		int temp = 0,sum1 = 0, sum2 = 0;
		for(int j =0; j < N ; ++j){
			scanf("%d" ,&A[j]);
		}
		//sorting in descending order
		for(int p = 0 ; p < N; ++p){
			for(int j = 0; j < N ;++j){
				if(A[j+1] > A[j]){
					temp = A[j];
					A[j] = A[j+1];
					A[j+1] = temp;
				}
			}
		}//end of sorting
		for(int p = 0 ; p < N - 1; p += 2){
			sum1 += A[p];
			sum2 += A[p+1];
		}
		if(N %2 !=  0){
			sum2 += A[N-1];
		}	
		(sum1 > sum2)?printf("%d \n" ,sum1) :printf("%d \n" ,sum2) ;		
	}
	return 0;
}
