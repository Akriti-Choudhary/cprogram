#include <stdio.h>
int main()
{int a,b;
 printf("enter two nos. ");
 scanf("%d%d" ,&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n %d %d" ,a,b);
 return 0;
 }
