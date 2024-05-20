#include<stdio.h>
void number()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	
}

int main()
{
	number();
	return 0;
}