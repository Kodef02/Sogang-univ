#include<stdio.h>

void shift_n_left(int *a,int n);
void shift_n_right(int *a,int n);
void print_array(int*a);

void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int n,check;
	scanf("%d",&n);
	scanf("%d",&check);
	if(check==0)
	{
		shift_n_left(a,n);
	}
	else if(check==1)
	{
		shift_n_right(a,n);
	}
	print_array(a);
}

void shift_n_left(int *a,int n)
{
	int *p;
	p=a;
	for(int i=0;i<10;i++)
	{
		if(i<10-n)
		{
			*(p+i)=i+1+n;
		}
		else
		{
			*(p+i)=n+i-9;
		}
	}
}
void shift_n_right(int *a,int n)
{
	int *p;
	p=a;
	for(int i=0;i<10;i++)
	{
		if(i<n)
		{
			*(p+i)=10-n+*(p+i);
		}
		else
		{
			*(p+i)=*(p+i)-n;
		}
	}
}
void print_array(int *a)
{
	int *p;
	p=a;
	for(int i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}
