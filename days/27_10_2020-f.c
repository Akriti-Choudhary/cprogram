#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a=");
    scanf("%d",&a);
    b=a/10;
    c=a%10;

    switch(b)
    {
        case 2: printf("twenty");
        break;

        case 3: printf("thirty");
        break;

        case 4: printf("fourty");
        break;

        case 5: printf("fifty");
        break;

        case 6: printf("sixty");
        break;

        case 7: printf("seventy");
        break;

        case 8: printf("eighty");
        break;

        case 9: printf("ninety");
    }

    switch(c)
    {
        case 1: printf("-one");
        break;
        case 2: printf("-two");
        break;
        case 3: printf("-three");
        break;
        case 4: printf("-four");
        break;
        case 5: printf("-five");
        break;
        case 6: printf("-six");
        break;
        case 7: printf("-seven");
        break;
        case 8: printf("-eight");
        break;
        case 9: printf("-nine");
        break;
    }
    return 0;
}
