#include<stdio.h>
int new(int n)
{
	if(n==0)
	{
	return 0;
	}
	else if(n==1)
	{
	return 1;
	}
	else
	{
		return new(n-1)+new(n-2);
	}
	
}




int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",new(i));
	}
}