#include<stdio.h>

void func_ged(int a,int b,int *ged);
void main(void)
{
	int a,b,ged;
	printf("Input first number: ");
	scanf("%d",&a);
	printf("Imput second number: ");
	scanf("%d",&b);
	func_ged(a,b,&ged);
	printf("GCD: %d\n",ged);
}

void func_ged(int a,int b,int *ged)
{
	int c=a%b;
	if(c==0)
	{
		*ged=b;
	}
	else
	{
		func_ged(b,c,ged);
	}
}
