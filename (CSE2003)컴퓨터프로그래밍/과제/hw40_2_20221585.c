#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void checkthesame(char* arr1, char* arr2, int a1, int a2)
{
	if (a1 == a2)
	{
		int same = 0, i;
		for (i = 0; i < a1; i++)
		{
			if (*(arr1 + i) == *(arr2 + i))
			{
				same++;
			}
		}
		if (same == i)
		{
			printf("Equal\n");
		}
		else
		{
			printf("Not equal\n");
		}
	}
	else
	{
		printf("Not equal\n");
	}
}
void chagework(char* array, int count)
{
	for (int i = 0; i < count; i++)
	{
		if ('A' <= *(array + i) && *(array + i) <= 'Z')
		{
			*(array + i) += 32;
		}
	}
}
void main()
{
	char* arr1, * arr2, temp1, temp2;
	char array1[100], array2[100];
	arr1 = array1; arr2 = array2;
	int i = 0;
	do {
		temp1 = getchar();
		if (temp1 != '\n') {
			*(arr1 + i) = temp1;
			i++;
		}
	} while (temp1 != '\n');
	chagework(arr1, i);
	int j = 0;
	do {
		temp2 = getchar();
		if (temp2 != '\n') {
			*(arr2 + j) = temp2;
			j++;
		}
	} while (temp2 != '\n');
	chagework(arr2, j);
	checkthesame(arr1, arr2, i, j);
}