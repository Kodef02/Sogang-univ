#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void factorial(int*arraypointer,int *checkpointer,int n, int r, int q)
{
	int count = 0;
	if (r == 0)
	{
		for (int i = 0; i < q; i++)
		{
			if (*(checkpointer + i) == *(arraypointer + i))
			{
				count++;
			}
		}
		if (count == n)
		{
			for (int i = 0; i < q; i++)
			{
				printf("%d ", *(arraypointer + i));
			}
			printf("\n");
		}
		return;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		swap((arraypointer + i), (arraypointer + n - 1));
		factorial(arraypointer,checkpointer,n - 1, r - 1, q);
		swap((arraypointer + i), (arraypointer + n - 1));
	}
}
void main(void)
{
	int n, array[8],checkarray[8];
	scanf("%d", &n);
	int* arraypointer,*checkpointer;
	arraypointer = array;
	checkpointer = checkarray;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", arraypointer + i);
		*(checkpointer+i)=* (arraypointer + i);
	}
	factorial(arraypointer,checkpointer,n, n, n);
}