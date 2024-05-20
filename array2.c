#include<stdio.h>
int main()
{
	int a[2],i,sum=0;
	for(i=0;i<2;i++)
	{
		printf("enter the a:(%d)" ,i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<2;i++)
	{
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
	
}