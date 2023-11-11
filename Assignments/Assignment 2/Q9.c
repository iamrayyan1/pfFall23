/*
  Name: Rayyan Merchant
  Date: 04/10/23
  Description: Printing spiral matrix.
*/


#include <stdio.h>

int main() 
{
    int order;
    printf("Enter the order for your spiral matrix: ");
    scanf("%d", &order);

    int matrix[100][100] = {0};
    int num = 1;
    int startRow = 0, endRow = order - 1, startCol = 0, endCol = order - 1;

    while (num <= order * order) 
	{
        for (int j = startCol; j <= endCol; j++) 
		{
            matrix[startRow][j] = num++;
        }
        startRow++;

        for (int i = startRow; i <= endRow; i++) 
		{
            matrix[i][endCol] = num++;
        }
        endCol--;

        for (int j = endCol; j >= startCol; j--) 
		{
            matrix[endRow][j] = num++;
        }
        endRow--;

        for (int i = endRow; i >= startRow; i--) 
		{
            matrix[i][startCol] = num++;
        }
        startCol++;
    }

    printf("Spiral Matrix Outwards:\n");
    for (int i = 0; i < order; i++) 
	{
        for (int j = 0; j < order; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    startRow = 0, endRow = order - 1, startCol = 0, endCol = order - 1;
    num = order * order;

    while (num >= 1) 
	{
        for (int j = startCol; j <= endCol; j++) 
		{
            matrix[startRow][j] = num--;
        }
        startRow++;

        for (int i = startRow; i <= endRow; i++) 
		{
            matrix[i][endCol] = num--;
        }
        endCol--;

        for (int j = endCol; j >= startCol; j--) 
		{
            matrix[endRow][j] = num--;
        }
        endRow--;

        for (int i = endRow; i >= startRow; i--) 
		{
            matrix[i][startCol] = num--;
        }
        startCol++;
    }

    printf("\nSpiral Matrix Inwards:\n");
    for (int i = 0; i < order; i++) 
	{
        for (int j = 0; j < order; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}





