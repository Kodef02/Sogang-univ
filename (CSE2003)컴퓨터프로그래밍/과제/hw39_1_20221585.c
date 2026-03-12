#include<stdio.h>
#include<stdlib.h>

void main()
{
	int** arr, n, m;
	scanf("%d %d", &n, &m);
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < m; i++)
	{
		arr[0][i] = 1;
	}
	for (int j = 0; j < n; j++)
	{
		arr[j][0] = 1;
	}
	for (int x = 1; x < n; x++)
	{
		for (int y = 1; y < m; y++)
		{
			arr[x][y] = arr[x - 1][y] + arr[x][y - 1];
		}
	}
	for (int xres = 0; xres < n; xres++)
	{
		for (int yres = 0; yres < m; yres++)
		{
			printf("%d ", arr[xres][yres]);
		}
		printf("\n");
	}
	free(arr);
}