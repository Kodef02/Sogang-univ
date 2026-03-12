/*

Program name : hw04_20221585

*/
#include<stdio.h>
void main(void)
{
	int a;
	printf("Price : ");
	scanf("%d",&a);
	printf("----------------output----------------\n");
	float b,c;
	b=(float)a/3;
	c=(float)a;
	c=(float)a*1.05;
	c*=1.05;
	c*=1.05;
	printf("Month\t\t:%10d%10d\n",3,6);
	printf("Payment\t\t:%10d%10d\n",a,(int)c);
	c=(int)c;
	c=(float)c/6;
	printf("--------------------------------------\n");
	printf("Pay/month\t:%10.2f%10.2f\n",b,c);
}
