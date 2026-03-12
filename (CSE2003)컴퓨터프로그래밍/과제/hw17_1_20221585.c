#include<stdio.h>

float avgFune(float x,float y,float z);
void gradeFune(float average);
int main(void)
{
		float x,y,z;
		printf("Input: ");
		scanf("%f%f%F",&x,&y,&z);
		avgFune(x,y,z);
		gradeFune(avgFune(x,y,z));
}
float avgFune(float x,float y,float z)
{
	float average;
	average=(x+y+z)/3;
	return average;
}
void gradeFune(float avg)
{
	if(avg < 50)
	{	
		printf("F\n");
	}
	if(avg>=50)
	{
		if(avg<70)
		{
			printf("D\n");
		}
	}
	if(avg<80)
	{
		if(avg>=70)
		{
			printf("C\n");
		}
	}

	if(avg<90)
	{
		if(avg>=80)
		{
			printf("B\n");
		}
	}
	if(avg>=90)
	{
		printf("A\n");
	}
}

