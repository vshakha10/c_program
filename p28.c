#include<stdio.h>
int main()
{
	int n,t=1,i=1;
	printf("enter the number :");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",t);
		t=t+t;
		i++;
		
	}
	while(i<=n);
	printf("%d\n",t);
	return 0;
}