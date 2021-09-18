#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int num ,sum =0;
    double num1 ,sum1 = 0;
    char str[100];
    scanf("%d" ,&num);
    scanf("%lf" ,&num1);
     scanf(" %[^\n]" ,str);
    sum = num + i;
    sum1 = num1 +d;
    printf("%d \n" ,sum);
     printf("%.1lf \n" ,sum1);
     for(int i =0 ; s[i] != '\0' ; ++i)
     {
         printf("%c" ,s[i]);
     }
     for(int i =0 ; str[i] != '\0' ; ++i)
     {
         printf("%c" ,str[i]);
     }
     
    return 0;
}
