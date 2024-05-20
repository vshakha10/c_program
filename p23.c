#include<stdio.h>
int main()
{
	char i='A',n;
	
	do
	{
		printf("%c:%c\t",i,i+32);
		++i;
	}
	while(i<='Z');
	
	return 0;
}