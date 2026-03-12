#include<stdio.h>

int Palindromenumber(int num,int digit);

void main(void)
{
	int num,digit=1;
	printf("Input number : ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("input number can not be negative\n");
	}
	else
	{
		Palindromenumber(num,digit);
	}
}
int Palindromenumber(int num,int digit)
{
	int a,b;
	a=(num%(10*digit)-num%digit)/digit;
	b=num/(10000/digit)-(num/(100000/digit))*10;
	if(a==b)
	{
		if(digit==100)
		{
			printf("%d is palindrome number\n",num);
		}
		return Palindromenumber(num,digit*10);
	}
	else
	{
		printf("%d is not palindrome number\n",num);
	}
}
