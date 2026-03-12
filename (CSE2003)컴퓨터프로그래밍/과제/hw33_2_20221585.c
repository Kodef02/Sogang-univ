#include<stdio.h>

void f(int *Y,int *M,int *D,int X);

void main()
{
	int X;
	scanf("%d",&X);
	int Y=2020,M=9,D=10;
	f(&Y,&M,&D,X);
	printf("%04d년%02d월%02d일\n",Y,M,D);
}
void f(int *Y,int *M,int *D,int X)
{
	if(X<=20)
	{
		*D+=X;
	}
	else if(20<X&&X<=51)
	{
		*D=*D+X-30;
		*M+=1;
	}
	else if(51<X&&X<=81)
	{
		*D=X-51;
		*M+=2;
	}
	else if(81<X&&X<=112)
	{
		*D=X-81;
		*M+=3;
	}
	else if(112<X&&X<=143)
	{
		*D=X-112;
		*M-=8;
	}
	else if(143<X&&X<=171)
	{
		*D=X-143;
		*M-=7;
	}
	else if(171<X&&X<=202)
	{
		*D=X-171;
		*M-=6;
	}
	else if(202<X&&X<=232)
	{
		*D=X-202;
		*M-=5;
	}
	else if(232<X&&X<=263)
	{
		*D=X-232;
		*M-=4;
	}
	else if(263<X&&X<=294)
	{
		*D=X-263;
		*M-=3;
	}
	else if(294<X&&X<=324)
	{
		*D=X-294;
		*M-=2;
	}
	else if(324<X&&X<=355)
	{
		*D=X-324;
		*M-=1;
	}
	else
	{
		*D=X-355;
	}
	if(X>112)
	{
		*Y+=1;
	}
}
