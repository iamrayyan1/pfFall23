#include<stdio.h>

int main(void) 
{
    int numRows, numCols, i, j, rowCounter = 0, colCounter = 0, cellCount = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    printf("Enter the number of columns: ");
    scanf("%d", &numCols);
    
    int matrix[numRows][numCols];
    
    printf("\n");
    
    for (i = 0; i < numRows; i++) 
	{
        for (j = 0; j < numCols; j++) 
		{
            do 
			{
                printf("Input value (%d, %d): ", i, j);
                scanf("%d", &matrix[i][j]);
            } 
			while (matrix[i][j] != 0 && matrix[i][j] != 1);
        }
        printf("\n");
    }
    
    int level;
    
    for (level = 1; level < numRows * numCols; level++) 
	{
        for (i = 0; i < numRows; i++) 
		{
            for (j = 0; j < numCols; j++) 
			{
                if ((matrix[i - 1][j - 1] == level || matrix[i - 1][j - 1] == level + 1) &&
                    (matrix[i - 1][j] == level || matrix[i - 1][j] == level + 1) &&
                    (matrix[i][j - 1] == level || matrix[i][j - 1] == level + 1)) 
				{
                    matrix[i][j] = level + 1;
                }
            }
        }
    }
    
    int highestLevel = 0;
    
    for (i = 0; i < numRows; i++) 
	{
        for (j = 0; j < numCols; j++) 
		{
            if (highestLevel < matrix[i][j]) 
			{
                highestLevel = matrix[i][j];
            }
        }
    }
    
    printf("\n");
    printf("(%dx%d)", highestLevel, highestLevel);
    

}
