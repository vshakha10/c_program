#include<stdio.h>
int main()
{
	int t1=0,t2=1,n,v;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		printf("%2d\t",t1);
		v=t1+t2;
		t1=t2;
		t2=v;
	}
	return 0;
}