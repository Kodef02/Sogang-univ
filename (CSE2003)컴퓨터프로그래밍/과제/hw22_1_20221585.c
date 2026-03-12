#include<stdio.h>

int problem(int,int);
void main(void)
{
	int a,b,store;
	printf("Input first number: ");
	scanf("%d",&a);
	printf("Input second number: ");
	scanf("%d",&b);
	if(a>b)
	{
		store=b;
		b=a;
		a=store;
	}
	if(a<1||b<1)
	{
		printf("Input is less than 1\n");
	}
	else
	{
		printf("Result: %d\n",problem(a,b));
	}

}

int problem(int a,int b)
{
	int i,sum=0;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
		if(i%3==0)
		{
			sum+=i;
		}
		if(i%6==0)
		{
			sum-=i;
		}
	}
	return sum;
}
