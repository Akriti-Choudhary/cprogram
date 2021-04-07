#include <stdio.h>
int main()
{	/* question 2- display the pattern for value of n*/
  int n;
  printf("Enter the value of n(no. of rows) : ");
  puts(" ");
  scanf("%d",&n);
  int arr[2*n];
  for(int i=1 ; i<=2*n;i=i+2)	//starting of the loop
  {
    arr[i-1]=i;
    arr[i]=2*n-i+1;
  }				//ending of the loop
  for(int i=0 ; i<n;i++)	//starting of the loop
 
  {
    for(int j=0 ; j<i;j++)	//starting of nested loop
    {
      printf("  ");		//ending of nested loop
    }
    for(int j=i ; j<=2*n-i-1;j++)	//starting of nested loop
    {
      printf("%d ",arr[j]);
    }					//ending of nested loop
    printf("\n");
  }				//ending of the loop	
  return 0;
}				//end of main
