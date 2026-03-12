#include<stdio.h>

void swap(int *a,int *b);
void sort(int *a,int n);
void print_array(int *a,int n);

void main()
{
	int n,array[1000],*pointer;
	scanf("%d",&n);
	pointer=array;
	for(int i=0;i<n;i++)
	{
		scanf("%d",pointer+i);
	}			
	sort(pointer,n);
	print_array(pointer,n);
	printf("\n");
}
void sort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			swap(a+j,a+i);
		}
	}
}
void swap(int *a,int *b)
{
	if(*a>*b)
	{
		int temp=*b;
		*b=*a;
		*a=temp;
	}
}
void print_array(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
}
