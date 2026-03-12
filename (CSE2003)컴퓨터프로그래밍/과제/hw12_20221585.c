#include<stdio.h>

int x=0;
int Fibonacci(int *y);
void main(void)
{
	int x=1;
	x = Fibonacci(&x);
	printf("Fibo(2) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(3) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(4) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(5) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(6) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(7) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(8) : %d\n",x);
	x = Fibonacci(&x);
	printf("Fibo(9) : %d\n",x);
}
int Fibonacci(int *y)
{
	int c = x+*y;
	x=*y;
	*y=c;
	return c;
}

