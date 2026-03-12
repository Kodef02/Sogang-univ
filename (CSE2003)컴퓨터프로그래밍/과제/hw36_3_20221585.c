#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pascal(int level, long long int tri[][100])
{

	for (int i = 0; i < level; i++)
	{
		tri[i][0] = 1;
		tri[i][i] = 1;
	}
	for (int i = 1; i < level; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			tri[i + 1][j + 1] = tri[i][j] + tri[i][j + 1];
		}
	}
	for (int i = 0; i < level; i++) {
		for (int j = 0; j < level; j++) {
			if (tri[i][j] == 0)
				continue;
			printf("%d ", tri[i][j]);
		}
		printf("\n");
	}

}
void main() {
	int level;
	int tri[100][100] = { 0, };
	scanf("%d", &level);
	pascal(level, tri);
}