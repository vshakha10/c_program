#include<stdio.h>
int main()
{
	char a;
	
	printf("enter the character : ");
	scanf("%c",&a);
	
	if(a>=97&&a<=122)
	{
		printf("%c",a-32);
	}
	else
	{
		printf("%c",a+32);
	}
	
	return 0;
	
	
	
}