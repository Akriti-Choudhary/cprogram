#include <stdio.h>
int main ()
{	int a,i,j=1;
	printf("enter a no. less than 7");
	scanf("%d" ,&a);
	i=a-1;
	printf("	s	m	t	w	t	f	s \n");
	if(a>7|| a<0)
	{printf("wrong input");
	}
	else{
	if( a==1)
	{printf(" ");
	}
	else if(a==2)
	{printf("	");}
	else if(a==3)
	{printf("		");}
	else if(a==4)
	{printf("			");}
	else if(a==5)
	{printf("				");}
	else if(a==6)
	{printf("					");}
	else
	{printf("						");}
	
	while(i<=31)
	{if(i%7!=0)
	{printf("	%d" ,j);}
	else
	{{if( i<10)
	printf(" ");}
	printf("\n	%d" ,j);}
	i++;j++;
	}}
	printf("\n");
	return 0;
	}
	
	
