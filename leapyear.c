#include<stdio.h>
int main()
{
	int leapyear;
	printf("enter the year : ");
	scanf("%d",&leapyear);
	
	if(leapyear%400==0&&leapyear%100==0||leapyear%4==0)
	{
		printf("leapyear");
	}
	else
	{
		printf("not leapyear");
	}
	return 0;
}