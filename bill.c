#include<stdio.h>
int main()
{
	float unit,amount,total;
	printf("enter the number of unit : ");
	scanf("%f",&unit);
	
	if(unit<=100)
	{
		amount=50+(unit*0.6);
		printf("%f",amount);
	}
	else if(unit>101&&unit<=200)
	{
		amount=50+(unit*0.8);
		printf("%f",amount);
	}
	else if(unit>201&&unit<=300)
	{
		amount=50+(unit*0.9);
		printf("%f",amount);
	}
	if(amount>300)
	{
		total=amount+(amount*0.15);
		printf("%f",total);
	}
	return 0;
	
}