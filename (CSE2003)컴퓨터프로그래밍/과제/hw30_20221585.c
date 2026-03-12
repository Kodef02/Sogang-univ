#include<stdio.h>

double function(char inputvalue[11]);

void main(void)
{
	char inputvalue[11];
	scanf("%s",inputvalue);
	printf("%lf\n",function(inputvalue));
}
double function(char inputvalue[11])
{
	int i=0,j=0;
	float k=1;
	double result=0;
	while(inputvalue[i]!='.'&&inputvalue[i]!='\0')
	{
		i++;
	}
	while(inputvalue[j]!='\0')
	{
		j++;
	}
	int check=i;
	if(inputvalue[0]=='-')
	{	
		i--;
		for(i;i>0;i--)
		{
			result+=(inputvalue[i]-'0')*k;
			k*=10;
		}
	}
	else
	{
		for(i;i>0;i--)
		{
			result+=(inputvalue[i-1]-'0')*k;
			k*=10;
		}
	}
	k=10;
	for(check+=1;check<j;check++)
	{
		result+=(inputvalue[check]-'0')/k;
		k*=10;
	}
	if(inputvalue[0]=='-')
	{
		return result*(-1);
	}
	else
	{
		return result;
	}
}
