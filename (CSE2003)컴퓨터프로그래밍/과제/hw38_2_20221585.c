#include<stdio.h>
#include<stdlib.h>

void double_double(int** a, int* size)
{
	*size *= 2;
	*a = realloc(*a, (*size) * sizeof(long long int));
	for (int i = 0; i <= (*size / 2); i++)
	{
		*(*a + (*size / 2) + i) = *(*a + i) * 2;
	}
}
void sort_array(int* a, int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				temp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = temp;
			}
		}
	}
}
int main()
{
	int size, * a;
	scanf("%d", &size);
	a = (int*)malloc(sizeof(int*) * size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", (a + i));
	}
	for (int j = 1; j <= 4; j = j * 2)
	{
		double_double(&a, &size);
		sort_array(a, size);
		for (int k = 0; k < size; k++)
		{
			printf("%d ", *(a + k));
		}
		printf("\n");
	}
	free(a);
	return 0;
}