#include<stdio.h>
int fac(int n)
{
	
	if(n==1 || n==0)
	{
		return 1;
	}
	else
	{
		return n*fac(n-1);
	}
}

int main()
{
	int n,total;
	printf("enter the factorial number : ");
	scanf("%d",&n);
	
	total=fac(n);
	printf("factorial number is %d",total);
	
}
	