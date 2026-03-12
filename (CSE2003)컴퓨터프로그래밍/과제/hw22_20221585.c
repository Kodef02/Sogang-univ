#include<stdio.h>

int function(int num1,int num2)
{
	int sum=0;
	for(int i=num1;i<=num2;i++)
	{

			if(i%2==0||i%3==0)
			{
				sum+=i;
			}
	}
	return sum;
}
void main(void)
{
	int num1,num2,swap;
	printf("Input the first number: ");
	scanf("%d",&num1);
	printf("Inout the second number: ");
	scanf("%d",&num2);
	if(num1-num2>0)
	{
		swap=num2;
		num2=num1;
		num1=swap;
	}
	if(num1<1||num2<1)
	{
		printf("Input is less than 1\n");
	}
	else
	{
			int result = function(num1,num2);
			printf("Result: %d\n",result);
	}
}

