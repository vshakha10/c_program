#include<stdio.h>
int main()
{
	int a;
	printf("enter the year : ");
	scanf("%d",&a);
	
	if(a>=18)
	{
		printf("eligible for voting");
	}
	else
	{
		printf("not eligible for voting");
	}
	return 0;
}