#include<stdio.h>
int main()
{
	int t=1,i=1;
	
	do
	{
		printf("%5d",i*t);
		t=t+t;
		i++;
	}
	while(i<=5);
	return 0;
}