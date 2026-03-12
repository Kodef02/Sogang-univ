#include<stdio.h>

void sqr(int);
void printOne(int);

int main(void)
{
	int num;
	printf("Input : ");
	scanf("%d",&num);
	sqr(num);
	return 0;
}
void sqr(int num)
{
	int result;
	result=num*num;
	printOne(result);
}
void printOne(int result)
{
	printf("Reslut : %d\n",result);
}
