#include<stdio.h>

void main(void)
{
	int array[10],store;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int j=10;j>0;j--)
	{
		for(int i=0;i<j-1;i++)
		{
			if(array[i]>array[i+1])
			{
				store=array[i+1];
				array[i+1]=array[i];
				array[i]=store;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}
