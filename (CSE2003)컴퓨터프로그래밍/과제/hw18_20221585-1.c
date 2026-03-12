#include<stdio.h>

int main(void)
{
	int storage;
	float num1,num2;
	char calculate;
	printf("Operator (+,-,*,/)\n");
	priintf("Please enter the formula. (ex : 12.3 + 5.5)\n");
	scanf("%f %c %f",&num1,&calculate,&num2);
	storage = (num2-(int)num2)*100+(int)num2;
	switch(calculate)
	{
		case '+':
				printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);
				break;
		case '-':
				printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);
				break;
		case '*':
				printf("%.2f * %.2f = %.2f\n",num1,num2,num1*num3);
				break;
		case '/':
				switch(storage)
				{
						case 0:
								printf("Division by zero\n");
								break;
						default:
								printf("%,2f / %.2f = %.2f\n",num1,num2,num1/num2);
								break;
				}
				break;
		default:
				printf("Invalid operator : %c\n",c);
				break;
	}
}
