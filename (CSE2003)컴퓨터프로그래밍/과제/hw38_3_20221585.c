#include<stdio.h>
#include<stdlib.h>

int comparelement(int a, int b, int c)
{
	if (a == 0)
	{
		if (b == 0)
			return 3;
		else
		{
			if (b < c)
				return 2;
			else
				return 3;
		}
	}
	else {
		if (b == 0)
		{
			if (c == 0)
				return 1;
			else
			{
				if (a < c)
					return 1;
				else
					return 3;
			}
		}
		else
		{
			if (c == 0)
			{
				if (a < b)
					return 1;
				else
					return 2;
			}
			else
			{
				if (a < b && a < c)
					return 1;
				else if (b < a && b < c)
					return 2;
				else
					return 3;
			}
		}
	}
}
int* merge(int* ary1, int size1, int* ary2, int size2, int* ary3, int size3) {
	int* ary = (int*)calloc(12, sizeof(int));
	int i = 0, j = 0, k = 0, check = 0;
	int r1, r2, r3, result;
	while (i < size1 || j < size2 || k < size3)
	{
		if (i >= size1)
			r1 = 0;
		else
			r1 = ary1[i];

		if (j >= size2)
			r2 = 0;
		else
			r2 = ary2[j];

		if (k >= size3)
			r3 = 0;
		else
			r3 = ary3[k];
		result = comparelement(r1, r2, r3);
		if (result == 1)
		{
			ary[check] = r1;
			i++;
		}
		else if (result == 2)
		{
			ary[check] = r2;
			j++;
		}
		else
		{
			ary[check] = r3;
			k++;
		}
		check++;
	}
	return ary;
}
void sorting(int* array, int size)
{
	int temp, i, j;
	for (i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
			}
		}
	}
}

void main()
{
	int* main_array, * sub1, * sub2, * sub3;
	sub1 = (int*)calloc(3, sizeof(int));
	sub2 = (int*)calloc(4, sizeof(int));
	sub3 = (int*)calloc(5, sizeof(int));
	printf("Input 12 interger : ");
	for (int i = 0; i < 12; i++)
	{
		if (i < 3)
		{
			scanf("%d", sub1 + i);
		}
		else if (i < 7)
		{
			scanf("%d", sub2 + i - 3);
		}
		else
		{
			scanf("%d", sub3 + i - 7);
		}
	}

	for (int j = 0; j < 12; j++)
	{
		if (j < 3)
		{
			if (j == 0)
				printf("Array1 :\t");
			printf("%d ", *(sub1 + j));
		}
		else if (j < 7)
		{
			if (j == 3)
				printf("\nArray2 :\t");
			printf("%d ", *(sub2 + j - 3));
		}
		else
		{
			if (j == 7)
				printf("\nArray3 :\t");
			printf("%d ", *(sub3 + j - 7));
		}
	}
	sorting(sub1, 3);
	sorting(sub2, 4);
	sorting(sub3, 5);
	main_array = merge(sub1, 3, sub2, 4, sub3, 5);
	printf("\nresult Array : ");
	for (int i = 0; i < 12; i++)
	{
		printf("%d ", *(main_array + i));
	}
	printf("\n");
	free(main_array);
	free(sub1);
	free(sub2);
	free(sub3);
}