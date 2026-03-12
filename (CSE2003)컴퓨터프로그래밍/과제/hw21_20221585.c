#include<stdio.h>

void main(void)
{
	int a,i=1,c=1,d=1;
	printf("Input: ");
	scanf("%d",&a);
	while(i<=a)
	{
		while(c<(a-i+1))
		{
			printf(" ");
			c++;
		}
		c=1;
		while(c<=(2*i-1))
		{
			printf("*");
			c++;
		}
		c=1;
		printf("\n");
		i++;
	}
}
