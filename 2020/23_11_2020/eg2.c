#include <stdio.h>
int main()
{	int arr[6] = {5,6,4,9,3,1};
	int sum=0,product=1;
	for(int i=0;i<6;i++)
	{	if(arr[i]%2==0)
		{	sum=sum+ arr[i];
		}
		else
		{	product = product * arr[i];
		}
	}
	printf("sum = %d \n" ,sum);
	printf("product = %d" ,product);
	return 0;
}
			
