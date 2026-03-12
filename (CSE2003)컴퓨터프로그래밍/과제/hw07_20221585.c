#include<stdio.h>

float problem(float,float,float,float);
float result(float,float,float,float);

int main(void)
{
	int a,b,c,d;
	printf("1st equation : y = ax-b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("2nd equation : y = cx-d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d",&c);
	printf("d = ");
	scanf("%d",&d);
	problem(a,b,c,d);
	result(a,b,c,d);
}
float problem(float  i,float j,float n, float m)
{
	float x;
	x=(j-m)/(i-n);
	printf("x is %f\n",x);
}
float result(float q,float w,float e,float r)
{
	float y;
	y=q*((w-r)/(q-e))-w;
	printf("y is %f\n",y);
}
