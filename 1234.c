#include<stdio.h>
int main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i*i);
		}
		else
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}