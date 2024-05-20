#include<stdio.h>
int main()
{
	int i=0,n,total=0;
	printf("enter the number : ");
	scanf("%d",&n);
	
	do
	{
		if(i%2==0)
		total=total+i;
		i++;
	}
	while(i<=n);
	printf("%d\n",total);
	
	return 0;
}