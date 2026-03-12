#include<stdio.h>

void output(int x[50],int number);
void main(void)
{
	int number;
	printf("Input number: ");
	scanf("%d",&number);
	printf("Original array\n");
	int array[50];
	for(int i=0;i<number;i++)
	{
		printf("arrary[%d] : ",i);
		scanf("%d",&array[i]);
	}
	output(array,number);
	printf("Transformed array\n");
	for(int i=0;i<number;i++)
	{
		printf("arrary[%d] : %d\n",i,array[i]);
	}
}
void output(int x[50],int number)
{
	for(int count=0;count<number;count++)
	{
		if(count%2==0)
		{
			x[count]=x[count]%3;
		}
		else if(count%2==1)
		{
			x[count]=x[count]%2;
		}
	}
}
