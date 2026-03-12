#include<stdio.h>

void main(void)
{
	printf("Input (10numbers): ");
	int a[10],max,min;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			max=a[i];
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	for(int i=4;i>=0;i--)
	{
		int store;
		store=a[i];
		a[i]=a[9-i];
		a[9-i]=store;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Max: %d, Min: %d\n",max,min);
}


