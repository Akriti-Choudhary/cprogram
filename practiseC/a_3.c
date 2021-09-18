#include<stdio.h>
struct people
{
char name[10];
int age;
char sex;
char dob[10];
}x[10];
void printdata()
{
	int i;
    printf("Sl No   name    age    dob\n");
    for( i=0;i<=9;i++)
    {
        if(x[i].sex=='f'||x[i].sex=='F')
        {
            printf("%d  %s  %d  %s\n",(i+1),x[i].name,x[i].age,x[i].dob);
        }
    }
}
int main()
{
int i;
    for( i=0;i<=9;i++)
    {
        printf("Enter name,age,sex and dob\n");
        scanf("%s %d %c %s",x[i].name,&x[i].age,&x[i].sex,x[i].dob);
    }
    printdata();
    return 0;

}
