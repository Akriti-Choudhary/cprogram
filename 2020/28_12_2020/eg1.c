#include <stdio.h>
struct employee{
	char name[20];
	int emp_no;
	int sal;
		};
int main()
{	
	struct employee emp1;
	puts("enter the details of the employee");
	//to enter the details of the employee
	puts("enter name");
	scanf("%s" ,emp1.name);
	puts("enter employee num");
	scanf("%d" ,&emp1.emp_no);
	puts("enter salary");
	scanf("%d" ,&emp1.sal);
	
	//to print the details of the employee
	printf("The name of employee is %s \n" ,emp1.name);
	printf("the employee no. is %d \n" ,emp1.emp_no);
	printf("salary of the employee is %d \n" ,emp1.sal);
	puts(" ");
	
	return 0;
}
