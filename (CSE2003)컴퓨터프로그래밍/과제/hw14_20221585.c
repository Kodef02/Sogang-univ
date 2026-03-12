#include<stdio.h>

void main(void)
{
	int a,b;
	printf("Enter the year to be tested : ");
	scanf("%d",&a);
	b=(a/4)*4;
	if(a%4==0&&a%100!=0||a%400==0)
		printf("It is a leap year\n");
	else
		printf("It is not a leap year\n");	
	if(a%4!=0&&b%100!=0)
		printf("%d is a leap year\n",b);
	if(a%4!=0&&b%100==0)
		printf("%d is a leap year\n",b-4);
	if(a%4==0&&a%100==0&&a%400!=0)
		printf("%d is a leap year\n",b-4);
}
