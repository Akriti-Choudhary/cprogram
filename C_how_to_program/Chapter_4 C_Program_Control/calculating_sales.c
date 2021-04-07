#include <stdio.h>
int main()
{
	float value, total=0;
	float retail_price[5] = { 2.98, 4.50, 9.98, 4.49, 6.87};
	int pr_num , qut_num ,n;
	puts("enter the limit");
	scanf("%d" ,&n);
	for(int i =1 ; i <= n ; ++i)
	{	puts(" enter the product number(b/w 1 to 5) and quantity sold for one day");
		scanf("%d%d" ,&pr_num ,&qut_num); 
		switch(pr_num)
		{
		case 1: value = retail_price[0] * qut_num ;
			printf("retail price %.2f" ,value);
			break;
		case 2: value = retail_price[1] * qut_num ;
			printf("retail price %.2f" ,value);
			break;
		case 3: value = retail_price[2] * qut_num ;printf("retail price %.2f \n" ,value);
			break;
		case 4: value = retail_price[3] * qut_num ;printf("retail price %.2f \n" ,value);
			break;
		case 5: value = retail_price[4] * qut_num ;printf("retail price %.2f \n" ,value);
			break;
		 default: puts("incorrect input");
				break;
		}
		total = total + value;
	}
		printf("total retail value of all products sold = %.2f \n" ,total);
		
		return 0;
}
		
		
		
		
