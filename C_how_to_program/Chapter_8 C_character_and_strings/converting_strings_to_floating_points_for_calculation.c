			/*doubt*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str1 = "Eureka12.32";
	char *str2 = "hello 1.1111world ";
	char *str3 = "code0.0code";
	char *str4 = "2.5happy22.6 coding";
	char *str5 = "sun.00022shine";
	char *str6 = "roses 222.222 us";
	
	char *str1Ptr;
	char *str2Ptr;
	char *str3Ptr;
	char *str4Ptr;
	char *str5Ptr;
	char *str6Ptr;
	
	double arr[6];
	arr[0] = strtod(str1 ,&str1Ptr);
	arr[1] = strtod(str2 ,&str2Ptr);
	arr[2] = strtod(str3 ,&str3Ptr);
	arr[3] = strtod(str4 ,&str4Ptr);
	arr[4] = strtod(str5 ,&str5Ptr);
	arr[5] = strtod(str6 ,&str6Ptr);
	
	double sum = 0.0;
	for(int i = 0; i < 6 ; ++i)
	{
		sum = sum + arr[i];
	}
	double average = sum / 6 ;
	
	printf("sum = %.3lf , average = %.3lf \n" ,sum ,average);
	
	
	return 0;
}
