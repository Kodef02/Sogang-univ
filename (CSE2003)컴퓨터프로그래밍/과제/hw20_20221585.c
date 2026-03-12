#include<stdio.h>

void main(void)
{
	int num1,num2,i=0,m,fail=0;
	float sum;
	printf("Numbers of class: ");
	scanf("%d",&num1);
	printf("Cutline: ");
	scanf("%d",&num2);
	while(i<num1)
	{
		printf("Input score #%d: ",i);
		scanf("%d",&m);
		if(m<num2)
		{
			fail++;
		}
		sum+=m;
		i++;
	}
	printf("Avreage score: %.2f\n",sum/num1);
	printf("Number of failures: %d\n",fail);
}


