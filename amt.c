#include<stdio.h>
#include<string.h>
struct amount
{
	int rate,qty,amt;
	float billamt,gst,dis,netbill,disamt;
};
struct amount;
int main()
{

	    int rate,qty,amt;
		float dis,billamt,gst,netbill,disamt;
		printf("enter the rate :");
		scanf("%d",&rate);
		printf("enter the qty :");
		scanf("%d",&qty);
		printf("enter the dis :");
		scanf("%f",&dis);
		
		amt=rate*qty;
		disamt=dis*amt/100;
		billamt=amt-disamt;
		gst=billamt*18/100;
		netbill=billamt+gst;
		
		printf("rate\tqty\tamt\tdis\tbillamt\t\tgst\tnetbill");
		printf("\n%d",rate);
		printf("\t%d",qty);
		printf("\t%d",amt);
		printf("\t%.2f",disamt);
		printf("\t%.2f",billamt);
		printf("\t\t%.2f",gst);
		printf("\t.%2f",netbill);
		
		return 0;
}
