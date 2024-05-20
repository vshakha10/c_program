#include<stdio.h>
void number()
{
	int n,total=0;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
				total+=i;
				printf("%d\n",i);
		}
	}
	printf("%d\t",total);
	
}

int main()

{
	number();	
	return 0;
}
