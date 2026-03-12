#include<stdio.h>

void main(void)
{
	int a;
	printf("Input: ");
	scanf("%d",&a);
	(a%2!=0) ? printf("%d is odd number\n",a) : printf("%d is even number\n",a);
}
