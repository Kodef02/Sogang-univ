#include<stdio.h>

void main(void)
{
	float a,b;
	char c;
	printf("Operator (+, -, *, /)\n");
	printf("Please enter the formula. (ex : 12.3 + 5.5)\n");
	scanf("%f %c %f",&a,&c,&b);
	int f1,f2;
	f1 = (int)b;
	f2 = (b-(int)b)*100;
	switch(c)
	{
		case '*':
			printf("%.2f * %.2f = %.2f\n",a,b,a*b);
			break;
		case '+':
			printf("%.2f + %.2f = %.2f\n",a,b,a+b);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f\n",a,b,a-b);
			break;
		case '/':
			switch(f1+f2)
			{
				case 0:
						printf("Division by zero\n");
						break;
				default:
						printf("%.2f / %.2f = %.2f\n",a,b,a/b);
						break;
			}
			break;
		default:
			printf("Invalid operator : %c\n",c);
			break;
	}
}

