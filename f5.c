#include<stdio.h>
void number()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=-n;i<=n;i++)
	{
		printf("%d\t",i);
	}
	
}

int main()
{
	number();
	return 0;
}