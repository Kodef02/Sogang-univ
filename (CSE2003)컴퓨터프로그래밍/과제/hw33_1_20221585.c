#include<stdio.h>

double calc(int *a,int n);

void main()
{
	int n,array[10000];
	scanf("%d",&n);
	int *saver;
	saver=array;
	for(int p=0;p<n;p++)
	{
		scanf("%d",saver+p);
	}
	printf("%.2f\n",calc(saver,n));
}
double calc(int *a,int n)
{
	double average;
	for(int p=0;p<n;p++)
	{
		average+=a[p];
	}
	return average/n;
}
