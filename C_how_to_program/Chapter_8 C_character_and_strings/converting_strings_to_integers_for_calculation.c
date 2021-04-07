#include <stdio.h>
#include <stdlib.h>		/*doubt*/
#include <math.h>
int main()
{	const char *str1 = "12.23 hey";
	const char *str2 = "hii 123 there";
	const char *str3 = "code 1.0";
	const char *str4 = "same 2 you";
	const char *str5 = "insane 2 ---- 2 beautiful";
	
	char *strptr1;
	char *strptr2;
	char *strptr3;
	char *strptr4;
	char *strptr5;
	
	double d1 = strtod(str1 ,&strptr1);
	double d2 = strtod(str2 ,&strptr2);
	double d3 = strtod(str3 ,&strptr3);
	double d4 = strtod(str4 ,&strptr4);
	double d5 = strtod(str5 ,&strptr5);
	
	double sum = pow(d1,2) + pow(d2,2) + pow(d3,2) + pow(d4,2) + pow(d5,2);
	
	printf("the sum of square of the five values are : %.3lf \n" ,sum);
	
	return 0;
}
