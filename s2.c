#include<stdio.h>
int main()
{
	char str,str1[50],str2[50];
    int i,s,a=0;
 
    printf("Enter the String: ");
   
 
	gets(str1);
    for (a=0;str1[a]!='\0';a++)
	{	
			
			s=a-1;
	}
	
	for (i=0;i<a;i++)
	{	
			
			str2[i]=str1[s];
			s--;
	}
	str2[i]='\0';
	printf("%s\n", str2);
 
    return 0;

}