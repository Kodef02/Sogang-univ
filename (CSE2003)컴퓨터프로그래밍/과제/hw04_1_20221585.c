#include<stdio.h>
void main(void)
{
	int a,b,c,d;
	printf("Birthday : ");
	scanf("%d",&a);
	b=a/10000;
	c=a/100-b*100;
	d=a%100;
	printf("Your birthday is %d / %d / %d\n",b,c,d);
	printf("Year : ");
	scanf("%d",&a);
	printf("In %d, your age is %d\n",a,a-b+1);
}
