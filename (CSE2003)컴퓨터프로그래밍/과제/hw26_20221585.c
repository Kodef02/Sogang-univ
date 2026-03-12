#include<stdio.h>

int Palindromenumber(int num,int digit);

void main(void)
{
	int num,digit=1,consider;
	printf("Input number: ");
	scanf("%d",&num);
	if(num<0)
	{
		printf("input number can not be negative\n");
	}
	else
	{
		consider = Palindromenumber(num,digit);
		if(consider==0)
		{
			printf("%d is not palindrome number\n",num);
		}
		else
		{
			printf("%d is palindrome number\n",num);
		}
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
			return 1;
		}
		return Palindromenumber(num,digit*10);
	}
	else
	{
		return 0;
	}
}
