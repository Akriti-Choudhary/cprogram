#include<stdio.h>
int maximum(int arr1[],int size)	//start of maximum function
{	//to calculate maximum element in the array
    int max=arr1[0];
    for(int i=0;i<size;i++)
    {
        if(arr1[i]>max)
        {
            max=arr1[i];
        }
    }
    return max;
}	// end of maximum function
int main()
{	//start of main
    int size,max=0;
    puts("Enter size of array : ");
    scanf("%d",&size);
    int arr[size],copy[size];
    int count=0;int fib[size];
    fib[0]=fib[1]=1;
    for(int i=2;i<size;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<size && count<size;i++)
    {
        for(int j=0;j<=i;j++){
            arr[count++]=fib[j];
        }
    }
    for(int i=0;i<size;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\nMaximum fibonacci number is : %d",maximum(arr,size));
    puts(" ");
    return 0;
} //end of main
