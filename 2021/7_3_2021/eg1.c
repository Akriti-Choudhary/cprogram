#include <stdio.h>
int main()
{	long long int T , N, E, H, A, B, C;
	
	puts("enter the number of test cases");
	scanf("%lld" ,&T);
	if( (T >=1) && T <= 200000)
	{for(int i = 1; i <= T ; ++i)
	{	long long int omelette=0 , cho_milk=0 , cho_cake=0 , cost=0;
		printf("enter the values");
		scanf("%lld%lld%lld" ,&N ,&E, &H);
		if((((N >=1) && (N <= 10000)) && (E >= 0)) && (H <= 1000000))
		{scanf("%lld%lld%lld" ,&A, &B, &C);
		if( ((A >=1) && A <= 1000000) && ((B >=1) && B <= 1000000) && ((C >=1) && C <= 1000000))
		{if( N > ((E + H ) / 2))
		{	printf("-1");
		}
		else
		{	if( ((A < C) && (A < B)) && (N >0))
			{	omelette = E / 2;
				N = N - omelette;
				E = E - (2 * omelette);
				if( (B < C) && (N >0))
				{	cho_milk = H / 3;
					N = N - cho_milk;
					H = H - (3 * cho_milk);
					cost = (omelette * A) + (cho_milk * B) + (N * C) ;
				}
				else
				{	if(N > 0)
					{	if( E > H)
						{	cho_cake = H ;
							E = E - cho_cake;
							H = H - cho_cake;
						}
						else
						{	cho_cake = E ;
							E = E - cho_cake;
							H = H - cho_cake;
						}	
					}
				cost = (omelette * A) + (N * B) + (cho_cake * C) ;
				}
				
				printf("%lld" ,cost);
			}
			else if( ((B < A) && (B < C)) && (N >0))
			{	cho_milk = H / 3;
				N = N - cho_milk;
				H = H - (3 * cho_milk);
				if( (A < C) && (N >0))
				{	omelette = E / 2;
					N = N - omelette;
					E = E - 2 * omelette;
					cost = (omelette * A) + (cho_milk * B) + (N * C) ;
				}
				else
				{	if(N > 0)
					{	if( E > H)
						{	cho_cake = H ;
							E = E - cho_cake;
							H = H - cho_cake;
						}
						else
						{	cho_cake = E ;
							E = E - cho_cake;
							H = H - cho_cake;
						}		
					}
				cost = (N * A) + (cho_milk * B) + (cho_cake * C) ;	
				}
				printf("%lld" ,cost);
			}
			else
			{	if( E >= H)
				{	cho_cake = H ;
					E = E - cho_cake;
					H = H - cho_cake;
					N = N - cho_cake;
				}
				else
				{	cho_cake = E ;
					E = E - cho_cake;
					H = H - cho_cake;
					N = N - cho_cake;
				}
				if( (A < B) && (N >0))
				{	omelette = E / 2;
					N = N - omelette;
					E = E - 2 * omelette;
				}
				else
				{	cho_milk = H / 3;
					N = N - cho_milk;
					H = H - (3 * cho_milk);
				}
				if(N < 0)
				{cost = (omelette * A) + (cho_milk * B) + (cho_cake * C) + N ;
				}
				else
				{cost = (omelette * A) + (cho_milk * B) + (cho_cake * C) ;
				}
				printf("%lld" ,cost);			
			}
		}
	}
	}
	}
	}
	return 0;
}

