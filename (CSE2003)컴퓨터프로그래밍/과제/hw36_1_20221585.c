#include<stdio.h>

void func(int arr[], int n, int psum[][1000])
{
	int sum = 0, i, j, k;
	for (i = n; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			for (k = j; k < i; k++)
			{
				sum += arr[k];
			}
			psum[j][i - 1] = sum;
			sum = 0;
		}
	}
}
void main()
{
	int n, arr[1000], a, b, psum[1000][1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d%d", &a, &b);
	func(arr, n, psum);
	printf("%d\n", psum[a][b]);
}