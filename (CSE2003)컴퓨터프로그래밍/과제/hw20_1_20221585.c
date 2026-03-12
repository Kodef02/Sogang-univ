#include<stdio.h>

void main(void)
{
	int a,b,i,m,fail=0;
	float sum;
	printf("Numbers of class: ");
	scanf("%d",&a);
	printf("Cutline: ");
	scanf("%d",&b);
	for(i=0;i<a;i++)
	{
		printf("Input score #%d: ",i);
		scanf("%d",&m);
		if(m<b)
		{
			fail++;
		}
		sum+=m;
	}
	printf("Average scord: %.2f\n",sum/a);
	printf("Number of failure: %d\n",fail);
}

