#include<stdio.h>
void number()
{
	char n,i;
	
	for(i='A';i<='Z';++i)
	{
		printf("%c:%c\t",i,i+32);
	}
	
}

int main()
{
	number();
	return 0;
}