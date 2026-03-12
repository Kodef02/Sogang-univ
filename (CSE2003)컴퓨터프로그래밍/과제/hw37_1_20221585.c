#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	int* array = (int*)malloc(sizeof(int) * n + 2);
	*array = 1, * (array + 1) = 1;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", *(array + i));
		*(array + i + 2) = *(array + i) + *(array + i + 1);
	}
	printf("\n");
	free(array);
	return 0;
}