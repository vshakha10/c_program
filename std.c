#include<stdio.h>
#include<string.h>
struct student
{
	int num,total;
	int sub[5];
	char name[50];
	float per;
	int marks;
};

struct student a[3];
int main()
{

	for(int i=0;i<3;i++)
	{
		printf("enter student num :");
		scanf("%d",&a[i].num);
		printf("enter student name :");
		scanf("%s",&a[i].name);
		
		for(int j=0;j<5;j++)
		{
			printf("enter the marks : ");
			scanf("%d",&a[i].sub[j]);
			a[i].total+=a[i].sub[j];
		}
		
		a[i].per=a[i].total/5;
		printf("num : %d\n",a[i].num);
		printf("name : %s\n",a[i].name);
		printf("total : %d\n",a[i].total);
		printf("per : %f\n",a[i].per);
	}
	return 0;
}
