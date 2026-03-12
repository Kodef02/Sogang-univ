#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int* a, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            if(*(a + j) > *(a + j + 1))
                swap((a+j),(a+j+1));
        }
    }
}
void all_sort(int a[][100], int n, int m)
{
    int(*array)[100];
    array = a;
    for (int i = 0; i < n; i++)
    {
        sort((array+i), m);
    }
}
int binary_search(int* a, int* endPtr, int key, int** findPtr)
{
    int* firstPtr, * midPtr=0, * lastPtr;
    firstPtr = a;
    lastPtr = endPtr;
    while (firstPtr <= lastPtr)
    {
        midPtr = firstPtr + (lastPtr - firstPtr) / 2;
        if (key == *midPtr)
        {
            break;
        }
        else if (key < *midPtr) 
        {
            lastPtr = midPtr - 1;
        }
        else
        {
            firstPtr = midPtr + 1;
        }
    }
    *findPtr = midPtr;
    return (key == *midPtr);
}

int all_binary_search(int a[][100], int n, int m, int key, int** findPtr)
{
    for (int i = 0; i < n; i++)
    {
        if (binary_search(a+i, ( * (a + i) + m), key, findPtr))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n, m, k,array[101][100];
    int** findPtr;
    findPtr = malloc(sizeof(int*));
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", *(array+i)+j);
        }
    }
    all_sort(array, n, m);
    if (all_binary_search(array, n, m, k, findPtr))
    {
        printf("1\n");
        printf("%p\n", *findPtr);
    }
    else
    {
        printf("0\n");
    }
    free(findPtr);
    return 0;
}