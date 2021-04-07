#include <stdio.h>
int main()
{	int a = -5, b = 3, c = 9, d = 2;
	printf("%d" , c != 9);			//a
	printf("%d" , d == 2); 		//b
	printf("%d" , a <= 0 || b < 2); 	//c
	printf("%d" , c <= 9 && a > b); 	//d
	printf("%d" , !(a+5) || !(b-2)); 	//e
	printf("%d" , (a + c) && (b + d+ a));	//f
	printf("%d" , !1 || (a+b)); 		//g
	printf("%d" , !(b +a + 2)); 		//h
	printf("%d" , !( b == 3)); 		//i
	printf("%d" , !(a == -5 && d != 5)); 	//j
}
