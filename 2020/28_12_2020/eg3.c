#include <stdio.h>
struct employee{
	char name[20];
	int emp_no;
	int sal;
		};
int max(struct emp1b,struct emp2b,struct emp3b,struct emp4b,struct emp5b);
int avg(struct emp1a,struct emp2a,struct emp3a,struct emp4a,struct emp5a);
int main()
{	
	struct employee emp1,emp2,emp3,emp4,emp5;
	puts("enter the details of the employee1");
	//to enter the details of the employee1
	puts("enter name");
	scanf("%s" ,emp1.name);
	puts("enter employee2 num");
	scanf("%d" ,&emp1.emp_no);
	puts("enter salary");
	scanf("%d" ,&emp1.sal);
	
	puts("enter the details of the employee2");
	//to enter the details of the employee2
	puts("enter name");
	scanf("%s" ,emp2.name);
	puts("enter employee2 num");
	scanf("%d" ,&emp2.emp_no);
	puts("enter salary");
	scanf("%d" ,&emp2.sal);
	
	puts("enter the details of the employee3");
	//to enter the details of the employee3
	puts("enter name");
	scanf("%s" ,emp3.name);
	puts("enter employee num");
	scanf("%d" ,&emp3.emp_no);
	puts("enter salary");
	scanf("%d" ,&emp3.sal);
	
	puts("enter the details of the employee4");
	//to enter the details of the employee4
	puts("enter name");
	scanf("%s" ,emp4.name);
	puts("enter employee num");
	scanf("%d" ,&emp4.emp_no);
	puts("enter salary");
	scanf("%d" ,&emp4.sal);
	
	puts("enter the details of the employee5");
	//to enter the details of the employee5
	puts("enter name");
	scanf("%s" ,emp5.name);
	puts("enter employee num");
	scanf("%d" ,&emp5.emp_no);
	puts("enter salary");
	scanf("%d" ,&emp5.sal);
	
	printf(" The maximum salary is %d \n" ,max(struct emp1,struct emp2,struct emp3,struct emp4,struct emp5));
	printf(" The average salary is %d \n" ,avg(struct emp1,struct emp2,struct emp3,struct emp4,struct emp5));
	
	return 0;
}
	
int avg(struct emp1a,struct emp2a,struct emp3a,struct emp4a,struct emp5a)
{	int avg ,sum;
	sum = emp1a.sal + emp2a.sal + emp3a.sal + emp4a.sal + emp5a.sal;
	avg = sum/5;
	return avg;
}
int max(struct emp1b,struct emp2b,struct emp3b,struct emp4b,struct emp5b)
{	if((emp1b.sal>emp2b.sal) && (emp1b.sal > emp3b.sal) && (emp1b.sal > emp4b.sal) && (emp1b.sal >emp5b.sal))
return emp1b.sal;
else if((emp2b.sal>emp1b.sal) && (emp2b.sal > emp3b.sal) && (emp2b.sal > emp4b.sal) && (emp2b.sal >emp5b.sal))
return emp2b.sal;
else if((emp3b.sal>emp2b.sal) && (emp3b.sal>emp1b.sal) && (emp3b.sal > emp4b.sal) && (emp3b.sal >emp5b.sal))
return emp3b.sal;
else if((emp4b.sal>emp1b.sal) && (emp4b.sal>emp2b.sal) && (emp4b.sal > emp3b.sal) && (emp4b.sal >emp5b.sal))
return emp4b.sal;
else 
return emp5b.sal;
}
