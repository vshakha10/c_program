#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks : ");
	scanf("%d",&marks);
	if(marks>=33)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}