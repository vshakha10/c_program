#include<stdio.h>
void number()
{
	char i;
	
	for(i='A';i<='Z';i++)
	{
		printf("%c:%d\n",i,i);
	}
	
}

int main()
{
	number();
	return 0;
}