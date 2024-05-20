#include<stdio.h>
void number()
{
	int a;
	printf("enter the number : ");
	scanf("%d",&a);
	
	for(int i=10;i>=1;i--)
	{
		printf("%d\t",i);
	}
	
}

int main()
{
	number();
	return 0;
}