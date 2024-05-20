#include<stdio.h>
int main()
{
		int n;
		printf("\n enter the size of array : ");
		scanf("%d",&n);
		int num[n],o=0,e=0;
		for(int i=0;i<n;i++)
		{
			printf("enter %d num : ",i+1);
			scanf("%d",&num[i]);
			
			if((i+1)%2!=0)
			{
				o+=num[i];
			}
			else
			{
				e+=num[i];
			}
		}
		printf("odd position sum:%d\n even position sum:%d",o,e);
	
}