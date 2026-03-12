#include<stdio.h>

void main(void)
{
	int a,b,a100,a10,a1,b100,b10,b1;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	a100=a/100;
	a10=(a%100)/10;
	a1=a%10;
	b100=b/100;
	b10=(b%100)/10;
	b1=b%10;

	int carry1=0,carry2=0,carry3=0;
	if(a1+b1>=10)
		carry1=1;
	if(a10+b10+carry1>=10)
		carry2=1;
	if(a100+b100+carry2>=10)
		carry3=1;
	printf("%d carry operations\n",(carry1+carry2+carry3));
}
