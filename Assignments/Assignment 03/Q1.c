/*
Name: Rayyan Merchant
ID: 23K-0073
Date: 7/12/23
Description: Finding Max values in sub-matrix to form matrix
 */


#include<stdio.h>
#include<stdlib.h>

#define MATRIX_SIZE_2 2
#define MATRIX_SIZE_4 4
#define MATRIX_SIZE_8 8

void readMatrixFromFile(char *filename, int matrix[][MATRIX_SIZE_8], int size) 
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) 
	{
        printf("Error opening file: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; i++) 
	{
        for (int j = 0; j < size; j++) 
		{
            fscanf(file, "%d", &matrix[i][j]);
        }
    }

    fclose(file);
}

void computeMaxValues(int inputMatrix[][MATRIX_SIZE_8], int size, int outputMatrix[][MATRIX_SIZE_4]) 
{
    for (int i = 0; i < size; i += 2) 
	{
        for (int j = 0; j < size; j += 2) 
		{
            int maxVal = inputMatrix[i][j];
            for (int k = 0; k < 2; k++) 
			{
                for (int l = 0; l < 2; l++) 
				{
                    if (inputMatrix[i + k][j + l] > maxVal) 
					{
                        maxVal = inputMatrix[i + k][j + l];
                    }
                }
            }
            outputMatrix[i / 2][j / 2] = maxVal;
        }
    }
}

void displayMatrix(int matrix[][MATRIX_SIZE_4], int size) 
{
    printf("Resultant Matrix is:\n");
    for (int i = 0; i < size / 2; i++) 
	{
        for (int j = 0; j < size / 2; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void processMatrix(int size, int studentID) 
{
    int matrix[MATRIX_SIZE_8][MATRIX_SIZE_8] = {0};
    int maxValues[MATRIX_SIZE_4][MATRIX_SIZE_4] = {0};

    
    for (int i = 0; i < MATRIX_SIZE_8; i++) 
	{
        for (int j = 0; j < MATRIX_SIZE_8; j++) 
		{
            matrix[i][j] = studentID;
        }
    }

    readMatrixFromFile("input.txt", matrix, size);

    computeMaxValues(matrix, size, maxValues);
    displayMatrix(maxValues, size);
}

int main(int argc, char *argv[]) 
{
	printf("Rayyan Merchant-23K-0073\n");
	
    if (argc != 2) 
	{
        printf("Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char *filename = argv[1];

    int studentID;
    printf("Enter your student ID (e.g., 23k-1234): ");
    scanf(" %*c%d", &studentID); 

    int option;

    do {
        printf("\n1. 2x2:\n2. 4x4:\n3. 8x8:\n");
        printf("Choose from options (1-3) to enter the size of the matrix: ");
        scanf("%d", &option);

        switch (option) 
		{
            case 1:
                processMatrix(MATRIX_SIZE_2, studentID);
                break;
            case 2:
                processMatrix(MATRIX_SIZE_4, studentID);
                break;
            case 3:
                processMatrix(MATRIX_SIZE_8, studentID);
                break;
            default:
                printf("Error! Invalid option entered. Please enter between 1-3.\n\n");
                break;
        }
    } 
	while (option != 1 && option != 2 && option != 3);

    return EXIT_SUCCESS;
}

