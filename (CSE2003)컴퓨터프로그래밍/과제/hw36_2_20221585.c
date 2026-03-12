#include <stdio.h>
#include <stdlib.h>

void func(int arr[], int n, int res[][1000]) {
	for (int i = 0; i < n; i++)
		res[n - 1][i] = arr[i];

	for (int i = n - 2; i >= 0; i--)
		for (int j = 0; j < n; j++)
			res[i][j] = res[i + 1][j] >= res[i + 1][j + 1] ? res[i + 1][j + 1] : res[i + 1][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (res[i][j] != 0) printf("%d ", res[i][j]);
		printf("\n");
	}

}

int main() {
	int n;
	scanf("%d", &n);
	int res[1000][1000];
	int arr[1001] = { 0, };

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	func(arr, n, res);

	return 0;
}