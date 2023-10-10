/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Symmetric Matrix
* Related Files:
*/

#include <stdio.h>

int main() 
{
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
  
    int isSymmetric = 1; 
 
    if (r != c) 
	{
        isSymmetric = 0;
    } else 
	{
        for (int i = 0; i < r; i++) 
		{
            for (int j = 0; j < c; j++)
			{
                if (matrix[i][j] != matrix[j][i])
				{
                    isSymmetric = 0; 
                    break;
                }
            }
            if (!isSymmetric) 
			{
                break;
            }
        }
    }    
    if (isSymmetric)
    {
        printf("Array is Symmetric:\n");
        for (int i = 0; i < r; i++) 
		{
            for (int j = 0; j < c; j++)
			{
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else 
	{
        printf("Array is not Symmetric.\n");
    }

    return 0;
}
