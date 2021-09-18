#include<stdio.h>
//function to calculate the maximum fibonacci number present in the array
int maxi(int a[],int size){
    //initialising max with the first index value
    int max=a[0];
    for(int i=0;i<size;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
void fill(int *a,int fib[],int size){
    int copy[size],count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            a[count++]=fib[j];
            if(count>=size) break;
        }
        if(count>=size) break;
    }
}
//driver or main code
int main(){
    int size,max=0;printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    int count=0;int fib[size];
    fib[0]=fib[1]=1;
    //storing all fibonacci series in an array for easy reference
    for(int i=2;i<size;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    //filling the main array in the given format
    fill(arr,fib,size);
    //printing the values in array
    for(int i=0;i<size;i++)
     {
        printf("%d ",arr[i]);
    }
    //printing the maximum term in the array
    printf("\nMaximum fibonacci number is : %d",maxi(arr,size));
    return 0;
}
