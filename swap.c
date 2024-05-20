#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	ptr1=&a;
	ptr2=&b;
	*ptr1=*ptr1+*ptr2;
	*ptr2=*ptr1-*ptr2;
	*ptr1=*ptr1-*ptr2;
	
	printf("\n a=%d and b=%d",a,b);
	return 0;
	
}
