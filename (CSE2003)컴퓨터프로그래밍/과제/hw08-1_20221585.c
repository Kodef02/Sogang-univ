#include<stdio.h>

void fuction1(int num1, int num2, int num3, int num4,float *average);
void fuction2(float *n1, float *n2, float *n3, float *n4,float average);
int main()
{
	int num1,num2,num3,num4;
	float average;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	printf("Enter the third number : ");
	scanf("%d",&num3);
	printf("Enter the fourth number : ");
	scanf("%d",&num4);
	float n1=num1,n2=num2,n3=num3,n4=num4;
	fuction1(num1,num2,num3,num4,&average);
	fuction2(&n1,&n2,&n3,&n4,average);
	printf("******** average is %.2f ********\n",average);
	printf("first number :	%10d -- deviation : %10.2f\n",num1,n1);
	printf("second number :	%10d -- deviation : %10.2f\n",num2,n2);
	printf("third number :	%10d -- deviation : %10.2f\n",num3,n3);
	printf("fourth number : %10d -- deviation : %10.2f\n",num4,n4);
}

void fuction1(int num1,int num2, int num3, int num4, float *average)
{
	float sum;
	sum=num1+num2+num3+num4;
	sum=sum/4;
	*average = sum;
}
void fuction2(float *n1, float *n2, float *n3, float *n4, float average)
{
	float i,j,n,m;
	i=(*n1)-average;
	j=(*n2)-average;
	n=(*n3)-average;
	m=(*n4)-average;
	*n1=i;
	*n2=j;
	*n3=n;
	*n4=m;
}
