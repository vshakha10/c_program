#include<stdio.h>
#include<string.h>
struct employe
{
	int id;
	char name[50];
	int salary;
};

struct employe e1,e2;
int main()
{
	e1.id=1;
	strcpy(e1.name,"raj");
	e1.salary=10000;
	
	e2.id=2;
	strcpy(e2.name,"rahul");
	e2.salary=11000;
	
	printf("id : %d\nname : %s\nsalary : %d\n",e1.id,e1.name,e1.salary);
	printf("id : %d\nname : %s\nsalary : %d\n",e2.id,e2.name,e2.salary);
	
	return 0;
}