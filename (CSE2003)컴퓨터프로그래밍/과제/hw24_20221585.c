#include<stdio.h>

void main(void)
{
	int a,b,store,sum=0;
	printf("Input two numbers: ");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		store=b;
		b=a;
		a=store;
	}
	else if(a==b)
	{
		printf("Both numbers are same\n");
	}
	else
	{
		do
		{
			a*=2;
			sum++;
		}while(a<=b);
		printf("Multiply is %d\n",sum);
	}
}

