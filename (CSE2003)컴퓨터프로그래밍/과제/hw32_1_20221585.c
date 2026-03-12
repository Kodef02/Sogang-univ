#include<stdio.h>

void main(void)
{
	int a,b,c;
	int *pa,*pb,*pc;
	scanf("%d %d %d",&a,&b,&c);
	pa=&a,pb=&b,pc=&c;
	if(*pa>=*pb&&*pa>=*pc)
	{
		if(*pb>=*pc)
		{
			printf("%d %d\n%p %p\n",*pc,*pa,pc,pa);
		}
		else
		{
			printf("%d %d\n%p %p\n",*pb,*pa,pb,pa);
		}
	}
	if(*pb>=*pa&&*pb>=*pc)
	{
		if(*pa>=*pc)
		{
			printf("%d %d\n%p %p\n",*pc,*pb,pc,pb);
		}
		else
		{
			printf("%d %d\n%p %p\n",*pa,*pb,pa,pb);
		}
	}
	if(*pc>=*pa&&*pc>=*pb)
	{
		if(*pb>=*pa)
		{
			printf("%d %d\n%p %p\n",*pa,*pc,pa,pc);
		}
		else
		{
			printf("%d %d\n%p %p\n",*pb,*pc,pb,pc);
		}
	}
}
