#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void calculate(char* a, char* b, char* res);
void make(int n, char** arr);
int main() {
    char** arr;
    int N;
    scanf("%d", &N);

    arr = (char**)malloc((N) * sizeof(char*));
    for (int i = 0; i < N; i++)
    {
        arr[i] = (char*)malloc(100 * sizeof(char));
    }
    make(N, arr);
    printf("%s\n", arr[N - 1]);
    return 0;
}
void make(int n, char** arr) {
    strcpy(arr[0], "1");
    if (n != 1) {
        strcpy(arr[1], "1");
    }
    for (int i = 2; i < n; i++) {
        calculate(arr[i - 1], arr[i - 2], arr[i]);
    }
}
void calculate(char* a, char* b, char* res) {
    char* ares;
    int N = 0, M = 0, max, count = 0, n1 = 0, n2 = 0, i = 0;

    while (a[N] != '\0')
    {
        N++;
    }
    while (b[M] != '\0')
    {
        M++;
    }
    if (N > M)
    {
        max = N;
    }
    else
    {
        max = M;
    }
    ares = (char*)malloc((max + 2) * sizeof(char));
    while (N || M || count) {
        if (N)
        {
            n1 = a[(N--) - 1] - '0';
        }
        if (M)
        {
            n2 = b[(M--) - 1] - '0';
        }
        ares[i++] = (n1 + n2 + count) % 10 + '0';
        count = (n1 + n2 + count) / 10;
        n1 = 0; n2 = 0;
    }
    for (int j = i - 1; j >= 0; j--) {
        res[i - j - 1] = ares[j];
    }
    res[i] = '\0';
    free(ares);
}