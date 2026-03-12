#include<stdio.h>

void make_array(int *a,int *b,int n);
void print_array(int *a,int n);
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int *pa,*pb;
	pa=a;pb=b;
	for(int i=0;i<n;i++)
	{
		scanf("%d",pa+i);
	};
	make_array(pa,pb,n);
	print_array(pb,n);
}
void make_array(int *a,int *b,int n)
{
	for(int i=0;i<n;i++)
	{
		if(n%2==1)
		{
			int temp;
			temp=*a;
			if(i!=n-1)
			{
				*(b+i)=(*(a+i+1));
			}
			else
			{
				*(b+i)=temp;
			}
		}		
		else
		{
			*(b+i)=*(a+n-1-i);
		}
	}
}
void print_array(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	printf("\n");
}
