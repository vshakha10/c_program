#include<stdio.h>
int fac(int n)
{
	if(n==1 || n==0)
	{
		return 0;
	}
	else
	{
		return n * fac (n-1);
	}
}
	