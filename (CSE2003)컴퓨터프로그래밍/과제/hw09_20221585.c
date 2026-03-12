#include<stdio.h>
void divideRemainder(int *a,int *b);

int main(void)
{
		int a,b;
		printf("Input two Number : ");
		scanf("%d %d",&a,&b);
		divideRemainder(&a,&b);
		printf("-----------------------------------------------------------\n");
		printf("OUTPUT : divide [%d] remainder[%d]\n",a,b);
}
void divideRemainder(int *a, int *b)
{
		int x,y;
		x=*a / *b;
		y=*a % *b;
		*a = x;
		*b = y;
}
