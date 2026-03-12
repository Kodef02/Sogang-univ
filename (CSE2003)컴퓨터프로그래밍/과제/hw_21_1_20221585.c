#include<stdio.h>

void main(void)
{
	int a,b=1;
	printf("Input: ");
	scanf("%d",&a);
	while(b<=a)
	{
		int c=1,d=1;
		while(c<=a-b)
		{
			printf(" ");
			c++;
		}
		while(d<2*b)
		{
			printf("*");
			d++;
		}
		printf("\n");
		b++;
	}
}
