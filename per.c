#include<stdio.h>
int perfact(int num)
{
	int i,rem=0,sum=0;
	for(i=1;i<=num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	
	if(num==sum)
	{
		printf("perfact");
	}
	else
	{
		printf("not perfact");
	}
	
}

int main()
{
	int c;
	printf("enter the number : ");
	scanf("%d",&c);
	
	perfact(c);
	return 0;
}