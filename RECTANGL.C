#include<stdio.h>
#include<conio.h>
void main()
{
	int area;
	int length;
	int width;
	clrscr();
	printf("Enter the value of width : ");
	scanf("%d",&width);
	printf("Enter the value of length : ");
	scanf("%d",&length);
	area=length*width;
	printf("The value of area is : %d",area);
getch();

}