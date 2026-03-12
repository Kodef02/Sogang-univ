#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n, x, y;
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("Error\n");
	}
	else
	{
		int** arr;
		arr = (int**)malloc(sizeof(int*) * n);
		for (int i = 0; i < n; i++)
		{
			arr[i] = (int*)malloc(sizeof(int) * n);
		}
		x = 0; y = n / 2;
		for (int i = 1; i <= n * n; i++)
		{
			arr[x][y] = i;
			if (i % n == 0)
				x++;
			else
			{
				x--;
				y--;
				if (x < 0)
					x = n - 1;
				if (y < 0)
					y = n - 1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		for (int i = 0; i < n; i++)
		{
			free(arr[i]);
		}
		free(arr);
	}
}