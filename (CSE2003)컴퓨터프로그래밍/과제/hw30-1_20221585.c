#include<stdio.h>

int array[20][20];
void snail(int n)
{
	int num=1,x=0,y=0;
	int i,j,k,sign=1;
	for(k=0;k<n;++k)
	{
		array[y][x]=num++;
		x+=sign;
	}
	x-=1;
	for(i=n-1;i>0;--i)
	{
		for(j=0;j<i;++j)
		{
			y+=sign;
			array[y][x]=num++;
		}
		sign*=-1;
		for(k=0;k<i;++k)
		{
			x+=sign;
			array[y][x]=num++;
		}
	}
}
void print_snail(int n)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			printf("%3d",array[i][j]);
		}
		printf("\n");
	}
}
void main(void)
{
	int n;
	scanf("%d",&n);
	for(n;n>0;n--)
	{
		snail(n);
		print_snail(n);
		printf("\n");
	}
}
