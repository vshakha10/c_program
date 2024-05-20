#include<stdio.h>
#include<stdio.h>
int coins()
{
	int a[5]={1,2,5,10,20};
	int n,i;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		if(n>=a[i])
		{
			printf("\n %d notes : %d",a[i],n/a[i]);
			n=n%a[i];
		}
	}
}

int main()
{
	coins();
}