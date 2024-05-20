#include<stdio.h>
void number()
{
	int n,sum=0;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++)
	{
		sum=sum+i;
	}
	printf("%d\t",sum);
	
}

int main()

{
	number();	
	return 0;
}