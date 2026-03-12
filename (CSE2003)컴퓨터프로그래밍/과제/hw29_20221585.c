#include<stdio.h>

void calculate(int matrix[3][4][4]);

void main(void)
{
	int matrix[3][4][4];
	for(int size=0;size<=1;size++)
	{
		for(int i=0;i<=3;i++)
		{
			for(int j=0;j<=3;j++)
			{
				if(size==0&&i==0&&j==0)
				{
					printf("First matrix:\n");
				}
				if(size==1&&i==0&&j==0)
				{
					printf("Second matrix:\n");
				}
				scanf("%d",&matrix[size][i][j]);
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			matrix[2][i][j]=0;
		}
	}
	calculate(matrix);
	printf("Result:\n");
	for(int i=0;i<4;i++)
	{
			for(int j=0;j<4;j++)
			{
				printf("%d	",matrix[2][i][j]);
			}
			printf("\n");
	}
}
void calculate(int matrix[3][4][4])
{
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<4;y++)
		{
			for(int i=0;i<4;i++)
			{
				matrix[2][x][y]+=matrix[0][x][i]*matrix[1][i][y];
			}
		}
	}
}
