#include <stdio.h>
int main()
{	int a = 5;
	printf("the original value of a =" " \n %d" ,a);
	void* aptr = &a; //generic pointer simply contain a memory location for unknown datatype
	printf("%p \n" ,aptr);
	*aptr = 7; //error -- because we are dereferencing a void *(pointer to void type)
	printf("the modified value of a =" " \n %d" ,a);
}
