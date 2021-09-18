#include <stdio.h>
int main()
{	int a,b,c,sum,result;
	printf("enter the price of the three items");
	scanf("%d%d%d" ,&a,&b,&c);
	sum=a+b+c;
	if(sum>= 5000)
	{	if((a>=3000)||(b>=3000)||(c>=3000))
 		{result=sum*0.4;
 		}
 		else 
 		{result= sum*0.5;
 		}
 	}
 	else if(sum>= 4000)
	{	if((a>=2000)||(b>=2000)||(c>=2000))
 		{result=sum*0.6;
 		}
 		else 
 		{result= sum*0.7;
 		}	
	}
	else if(sum>=2000)
	{ result= sum*0.8;
	}
	else
	{ result= sum;
	}
	printf("%d" ,result);
	return 0;
	}
	
