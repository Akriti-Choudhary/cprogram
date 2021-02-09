#include <stdio.h>
int main()
{
    int day_num, year,date = 1, j = 1,flag=0,number_of_days=31;
    printf("Enter the day number of date and year : ");
    scanf("%d%d", &day_num,&year);
    if (day_num > 7)
    {
        printf("Wrong input");
    }
    else
    {
        for (int k = 1; k < 13; k++)
        {
            if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
                number_of_days=31;
            }
            if(k==4||k==6||k==8||k==11){
                number_of_days=30;
            }
            if(k==2){
                if(((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)){
                    number_of_days=29;
                }
                else{
                    number_of_days=28;
                }
            }
            printf("\nS\tM\tT\tW\tT\tF\tS\n");
            date=1;flag=0;j=1;
            for (;date <= number_of_days;)
            {
                for (; j < day_num;)
                {
                    printf("\t");
                    j++;
                }
                int i = day_num;
                for (;i <= 7;)
                {
                    printf("%d\t", date);
                    date++;
                    if(date>number_of_days){
                        day_num=i+1;
                        flag=1;
                        break;
                    }
                    i++;
                }
                if(flag==1) break;
                day_num = 1;
                j = 7;
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
