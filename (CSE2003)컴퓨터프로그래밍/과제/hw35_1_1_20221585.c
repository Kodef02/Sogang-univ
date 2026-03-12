#include <stdio.h>

void factorial_array(int a[8],int b[8],int check[8],int x,int t, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(check + i) != *(a + i))
		{
			count++;
		}
	}
	if (x == n&&count==n)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", *(a + i));
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (*(b + i) == 0)
		{
			*(b + i) = 1;
			*(a + x) = i + 1;
			factorial_array(a, b,check, x + 1,t,n);
			*(b + i) = 0;
		}
	}
	
}
void main(void)
{
	int n, a[8], b[8] = { 0, };
	int check[8];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (check + i));
	}
	factorial_array(a,b,check,0,0,n);
	return 0;
}