#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number : ");
	scanf("%d",&n);
	
	
	for(i=-n;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
	return 0;
}