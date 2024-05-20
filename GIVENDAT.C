#include<stdio.h>
#include<conio.h>
void main()
{
	int Rate,Qty,Amt;
	float Billamt,Gst,Dis,Netbill,Disamt;
clrscr();
	printf("enter the rate :");
	scanf("%d",&Rate);
	printf("enter the Qty :");
	scanf("%d",&Qty);
	printf("enter the Dis :");
	scanf("%d",&Dis);

	Amt=Rate*Qty;
	Disamt=Dis*Amt/100;
	Billamt=Amt-Disamt;
	Gst=Billamt*18/100;
	Netbill=Billamt+Gst;

clrscr();

	printf("Rate\tQty\tAmt\tDis\tbillamt\t\tGst\tNetbill");
	printf("\n%d",Rate);
	printf("\t%d",Qty);
	printf("\t%d",Amt);
	printf("\t%.2f",Disamt);
	printf("\t%.2f",Billamt);
	printf("\t%.2f",Gst);
	printf("\t%.2f",Netbill);


getch();
}