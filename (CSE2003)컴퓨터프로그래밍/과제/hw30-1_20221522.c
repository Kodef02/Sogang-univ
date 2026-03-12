#include<stdio.h>

int array[20][20];
void snail(int n)
{
	int casenumber=1,x=0,y=0,counter=1;
	for(int i=0;i<n;i++)
	{
		array[y][x]=casenumber;
		casenumber++;
		x+=counter;
	}
	x=x-1;
	for(int j=n-1;j>0;j--)
	{
		for(int k=0;k<j;k++)
		{
			y+=counter;
			array[y][x]=casenumber;
			casenumber++;
		}
		counter*=-1;
		for(int k=0;k<j;k++)
		{
			x+=counter;
			array[y][x]=casenumber;
			casenumber++;
		}
	}
}
void print_snail(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
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
