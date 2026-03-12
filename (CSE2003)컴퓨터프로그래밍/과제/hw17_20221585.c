#include<stdio.h>

float avgFune(float a,float b,float c);
void gradeFune(float average);
void main(void)
{
	float a,b,c;
	printf("Input: ");
	scanf("%f %f %f",&a,&b,&c);
	avgFune(a,b,c);
	gradeFune(avgFune(a,b,c));
}
float avgFune(float a,float b,float c)
{
	float average;
	average=(a+b+c)/3;
	return average;
}
void gradeFune(float avg)
{
	if(avg>=70)
	{
			if(avg>=80)
			{
				if(avg>=90)
				printf("Grade: A\n");
				else
				printf("Grade: B\n");
			}
			else
				printf("Grade: C\n");
	}
	else
	{
			if(avg>=50)
					printf("Grade: D\n");
			else
					printf("Grade: F\n");
	}
}
