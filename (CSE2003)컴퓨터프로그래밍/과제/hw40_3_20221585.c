#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
	int num, check;
	scanf("%d", &num);
	char** arr = (char**)malloc(sizeof(char*) * (num + 1));
	char* temp = (char*)malloc(sizeof(char) * 50);
	for (int i = 0; i <= num; i++)
	{
		*(arr + i) = (char*)malloc(sizeof(char) * 50);
		gets(*(arr + i));
		*(*(arr + i) + strlen(*(arr + i))) = '\0';
	}
	printf("-Lexicographic Order-");
	for (int i = 0; i < num; i++)
	{
		check = i;
		for (int k = i + 1; k <= num; k++)
		{
			if (strcmp(*(arr + check), *(arr + k)) > 0)
				check = k;
		}
		strcpy(temp, *(arr + i));
		strcpy(*(arr + i), *(arr + check));
		strcpy(*(arr + check), temp);
	}
	for (int i = 0; i <= num; i++)
	{
		printf("%s\n", *(arr + i));
	}
	for (int i = 0; i <= num; i++)
	{
		free(*(arr + i));
	}
	free(arr);
	free(temp);
}