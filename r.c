#include<stdio.h>
int number()
{
	char a[50],b[50];
	int i,j,k;
	printf("enter the value :");
	gets(a);
	
	for(i=0;a[i]!='\0',i++)
	{
		k=i;
	}
	for(j=0;j<=k;i++)
	{
		b[j]=a[--i];
	}
	b[j]='\0';
	printf("answer is : %s",b);
	
}

int main()
{
	number();
}