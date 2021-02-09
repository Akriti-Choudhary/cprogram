#include <stdio.h>
int main(){	
	int first=100,last=2000,currnum,rem=0,i,count;
	while(first<=last)
	{	currnum = first;
		i=1;
		count=0;
		rem=0;
		while(i<= first)
		{	rem = currnum % i;
			if(rem == 0)
			{	count = count + 1;
			}
			i++;
			}
			if(count == 2)
			{	printf(" %d" ,currnum);
		
			}
		first++;
		}
		return 0;
	}

 
