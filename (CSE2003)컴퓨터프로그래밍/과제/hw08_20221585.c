#include<stdio.h>

float fuction1(int a,int b,int c,int d);
float fuction2(float average,float number);
void main(void)
{
	int a,b,c,d;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	printf("Enter the third number : ");
	scanf("%d",&c);
	printf("Enter the fourth number : ");
	scanf("%d",&d);
	printf("******** average is %.2f ********\n",fuction1(a,b,c,d));
	float sum = fuction1(a,b,c,d);
	printf("first number :	%10d -- deviation : %10.2f\n",a,fuction2(sum,a));
	printf("second number :	%10d -- deviation : %10.2f\n",b,fuction2(sum,b));
	printf("third number :	%10d -- deviation : %10.2f\n",c,fuction2(sum,c));
	printf("fourth number :	%10d -- deviation : %10.2f\n",d,fuction2(sum,d));	
}

float fuction1(int a, int b, int c, int d)
{
	float sum;
	sum = a+b+c+d;
	sum/=4;
	return sum;
}
float fuction2(float average, float number)
{
	return number - average;
}
