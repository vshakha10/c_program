#include<stdio.h>
int main()
{
	int a[5],o=0,e=0;
	//printf("enter the array of size : ");
	//scanf("%d",&n);
	
	
	for(int i=0;i<n;i++)
	{
		printf("enter element %d values : ",i++);
		scanf("%d",&a[i]);
		if(num[i]%2!=0)
		{
			o+=num[i];
		}
		else
		{
			e+=num[i];
		}
	}
	
	printf("odd value element sum : %d\n even value element sum : %d ",o,e);
	return 0;
}