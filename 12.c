#include<stdio.h>
int main()
{
	int n,t=1;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
	
		printf("%d\n",t);
		t=t+t;
		
	}
	printf("%d\n",t);
	return 0;
}