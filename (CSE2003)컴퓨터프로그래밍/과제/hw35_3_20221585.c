#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void count(int board[][100], int n, int m)
{
    int(*boa)[100], (*che)[100];
    boa = board;
    int checkarray[100][100];
    che = checkarray;
    int countnumber = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", (*(boa + i) + j));
            (*(*(che + i) + j)) = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((*(*(che + i) + j)) == 0)
            {
                if ((*(*(boa + i) + j)) == 0)
                {
                    if ((*(*(che + i) + j + 1) == 1 || (j + 1) == m) && ((i + 1) != n && *(*(che + i + 1) + j) != 1))
                    {
                        *(*(che + i) + j) = 1;
                        *(*(che + i + 1) + j) = 1;
                        countnumber++;
                    }
                    else if ((*(*(che + i) + j + 1)) != 1 && j + 1 != m)
                    {
                        *(*(che + i) + j) = 1;
                        *(*(che + i) + j + 1) = 1;
                        countnumber++;
                    }
                    
                }
                else if ((*(*(boa + i) + j)) == 1)
                {
                    if (((i + 1) == n || (*(*(che + i + 1) + j)) == 1) && (*(*(che + i) + j + 1)) != 1 && (j + 1) != m)
                    {
                        *(*(che + i) + j) = 1;
                        *(*(che + i) + j + 1) = 1;
                        countnumber++;
                    }
                    else if ((i + 1) != n && (*(*(che + i + 1) + j)) != 1)
                    {
                        *(*(che + i) + j) = 1;
                        *(*(che + i + 1) + j) = 1;
                        countnumber++;
                    }
                }
            }
        }
    }
    printf("%d\n", countnumber);
}

void main()
{
    int board[100][100];
    int N, M;
    scanf("%d %d", &N, &M);
    count(board, N, M);
}