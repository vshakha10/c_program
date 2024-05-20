#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n;
	int area;
	clrscr();
	printf("enter the value of p : ");
	scanf("%d",&p);
	printf("enter the value of r : ");
	scanf("%d",&r);
	printf("enter the value of n : ");
	scanf("%d",&n);
	area=p*r*n/100;
	printf("The value of area is :%d",area);
getch();
}