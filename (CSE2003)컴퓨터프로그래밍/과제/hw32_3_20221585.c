#include<stdio.h>

void calc(int*a,int*b,char op);

int main()
{
	int a,b;
	char op;
	scanf("%c",&op);
	scanf("%d %d",&a,&b);
	calc(&a,&b,op);
	printf("result: %d\n",a);
	return 0;
}
void calc(int *a,int *b,char op)
{
	if(op=='+')
	{
		*a=(*a)+(*b);
	}
	if(op== '-')
	{
		*a=(*a)-(*b);
	}
	if(op== '*')
	{
		*a=(*a)*(*b);
	}
	if(op=='/')
	{
		*a=(*a)/(*b);
	}
}
