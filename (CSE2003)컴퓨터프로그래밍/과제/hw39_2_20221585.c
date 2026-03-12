#include<stdio.h>
#include<stdlib.h>

int determinant(int** a)
{
	float check;
	check = a[0][0] * a[1][1] - a[0][1] * a[1][0];
	return check;
}
int main()
{
	int** arr;
	float** invarr, checking;
	arr = (int**)malloc(sizeof(int*) * 2);
	for (int i = 0; i < 2; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * 2);
	}
	invarr = (float**)malloc(sizeof(float*) * 2);
	for (int i = 0; i < 2; i++)
	{
		invarr[i] = (float*)malloc(sizeof(float) * 2);
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	checking = determinant(arr);
	if (checking == 0)
	{
		printf("Singular Matrix\n");
	}
	else
	{
		printf("Invertible Matrix\n");
		int x = 1;
		for (int i = 0; i < 2; i++)
		{
			int y = 1;
			for (int j = 0; j < 2; j++)
			{
				invarr[i][j] = arr[y][x] / checking;
				y--;
				if ((i == 0 && j == 1) || (i == 1) && j == 0)
				{
					invarr[i][j] = -invarr[i][j];
				}
			}
			x--;
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				printf("%.2f ", invarr[i][j]);
			}
			printf("\n");
		}
	}
	for (i = 0; i < 10; i++)
	{
		free(arr[i]);
	}
	free(arr);
	for (i = 0; i < 10; i++)
	{
		free(invarr[i]);
	}
	free(invarr);
	return 0;
}