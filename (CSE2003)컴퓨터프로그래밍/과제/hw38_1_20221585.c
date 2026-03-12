#include<stdio.h>
#include<stdlib.h>


void push_back(int** a, int* size, int value)
{
	*a = realloc(*a, (*size) * sizeof(int));
	*(*a + *size - 1) = value;
}
void pop_back(int** a, int* size)
{
	*a = realloc(*a, (*size) * sizeof(int));
}
double average(int* a, int size)
{
	double counting = 0;
	for (int i = 0; i < size; i++)
	{
		counting += *(a + i);
	}
	if (size == 0)
		return 0;
	return counting / size;
}
double variance(int* a, int size)
{
	double var = average(a, size), sum;
	for (int i = 0; i < size; i++)
	{
		sum += (*(a + i) - var) * (*(a + i) - var);
	}
	if (size == 0)
		return 0;
	return sum / size;
}
int main()
{
	int* a, check, number, size = 0, value;
	a = (int*)malloc(sizeof(int*) * size);
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &check);
		if (check == 1)
		{
			scanf("%d", &value);
			size++;
			push_back(&a, &size, value);
		}
		else if (check == 2)
		{
			size--;
			pop_back(&a, &size);
		}
		for (int i = 0; i < size; i++)
		{
			printf("%d ", *(a + i));
		}
		printf("\n%.6lf %.6lf\n", average(a, size), variance(a, size));
	}
	free(a);
}