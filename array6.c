#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,sum=0,total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the value of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
			printf("\n");
	}
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			
			sum+=a[i][j];
		}
	
		
		
	}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				
				sum+=b[i][j];
			}
			
		}
	printf("%d",sum);
	
	
}