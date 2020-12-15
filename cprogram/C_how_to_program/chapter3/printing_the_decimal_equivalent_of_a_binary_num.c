#include<stdio.h>
int main(){
    int num,d,counter=0,product=1,sum=0;
    printf("Enter a number : ");scanf("%d",&num);
    while(num){
        product=1;
        d=num%10;
        num/=10;
        if(d==1){
            for(int i=0;i<counter;i++){
                product*=2;
            }
            sum+=product;
        }
        counter++;
    }
    printf("Decimal : %d",sum);
    return 0;
}
