#include<stdio.h>

int plus(int,int);
void main(void)
{
	int a,b,sum;
	printf("Input first number : ");
	scanf("%d",&a);
	printf("Input second number : ");
	scanf("%d",&b);
	sum = plus(a,b);
	printf("%d + %d = %d\n",a,b,sum);
}
int plus(int a,int b)
{
	int result;
	result = a+b;
	return result;
}
