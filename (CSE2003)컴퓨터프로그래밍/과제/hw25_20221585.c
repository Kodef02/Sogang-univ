#include<stdio.h>

int isDivisor(int m,int n);
int isPrime(int m);
void main(void)
{
	int m,n;
	printf("Input : ");
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		if(isDivisor(m,n)&&isPrime(m))
		{
			printf("%d\t",m);
		}
	}
	printf("\n");
}

int isDivisor(int m,int n)
{
	int check;
	check=n%m;
	if(check==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isPrime(int m)
{
	int x=0,y;
	for(y=1;y<=m;y++)
	{
		if(m%y==0)
		{
			x++;
		}
	}
	if(x==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
