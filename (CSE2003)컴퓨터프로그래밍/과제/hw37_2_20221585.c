#include <stdio.h>
#include <stdlib.h>

int* get_big_sum(int maxplusone, int n, int m, char nlist[], char mlist[]) {
	int* result = (int*)malloc(maxplusone * sizeof(int));

	for (int i = 0; i < maxplusone; i++)
		result[i] = 0;

	for (int i = 0; i < maxplusone; i++) {
		int temp = (n - 1 - i >= 0 ? nlist[n - 1 - i] - '0' : 0) + (m - 1 - i >= 0 ? mlist[m - 1 - i] - '0' : 0);
		result[i] += temp % 10;
		if (temp >= 10 || result[i] >= 10) {
			result[i] %= 10;
			result[i + 1] = 1;
		}
	}

	return result;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int maxplusone = n > m ? n + 1 : m + 1;

	char* nlist = (char*)malloc(n * sizeof(char));
	char* mlist = (char*)malloc(m * sizeof(char));
	int* result;

	int ni = 0, mi = 0;

	do {
		char temp = getchar();
		if (temp != '\n') {
			nlist[ni] = temp;
			ni++;
		}
	} while (ni != n);

	do {
		char temp = getchar();
		if (temp != '\n') {
			mlist[mi] = temp;
			mi++;
		}
	} while (mi != m);

	result = get_big_sum(maxplusone, n, m, nlist, mlist);

	for (int i = maxplusone - 1; i >= 0; i--) {
		if (i != maxplusone - 1)
			printf("%d", result[i]);
		else if (i == maxplusone - 1 && result[i] != 0)
			printf("%d", result[i]);
	}
	printf("\n");
	free(result);
	free(nlist);
	free(mlist);
	return 0;
}