#include<stdio.h>

void swap(int *x,int *y);
int main()
{
	int x,y;
	printf("Input two Number\n");
	printf("     	x : ");
	scanf("%d",&x);
	printf("    	y : ");
	scanf("%d",&y);
	printf("-----------------------------------------------------------\n");
	printf("Before : x [%d] y [%d]\n",x,y);
	printf("-----------------------------------------------------------\n");
	swap(&x,&y);
	printf("After  : x [%d] y [%d]\n",x,y);
}
void swap(int *x, int *y)
{
	int a=*x,b=*y;
	*y=a;
	*x=b;
}
