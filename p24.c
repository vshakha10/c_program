#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the number : ");
	scanf("%d",&n);
	
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	printf("%d\t",sum);
	return 0;
}