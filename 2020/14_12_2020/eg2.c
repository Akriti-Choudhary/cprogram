#include <stdio.h>
int main()
{	char arr[4] = {'A','B','C','D'};
	char *b = arr;
	char *c = arr+3;
	for(int j =0;j<4;j++)
		{	printf("%s" ,b+j);
			printf("\n");
		}
		printf("\n");
	for(int j =3;j>=0;j--)
	{	printf("%s" ,b+j);
			printf("\n");
	}
	printf("\n");
	for(int i =3;i>=0;i--)
	{	for(int j =3;j>=0;j--)
		{	printf("%c" ,*(c));
			c--;
		}
		c = arr+i-1;
		printf("\n");
	}
}
		
	

