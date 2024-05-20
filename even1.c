#include<stdio.h>
int main()
{
	int n,i,total=0;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			total+=i;
			printf("%d\n",i);
		}
		
	}
	printf("%d",total);
	return 0;

}