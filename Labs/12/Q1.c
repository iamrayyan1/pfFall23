#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100
#define MAX_CELL_SIZE 100

void displayTable(char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE], int numRows, int numCols);

int main() 
{
    FILE *csvFile;
    char fileName[100];

    printf("Enter the CSV file name: ");
    scanf("%s", fileName);

    csvFile = fopen(fileName, "r");

    if (csvFile == NULL) 
	{
        printf("Error opening the file.\n");
        return 1;
    }

    char cellTable[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE];
    int numRows = 0;
    int numCols = 0;

    char line[MAX_COLS * MAX_CELL_SIZE];
    fgets(line, sizeof(line), csvFile);

    char *token = strtok(line, ",");
    while (token != NULL && numCols < MAX_COLS) 
	{
        strcpy(cellTable[numRows][numCols], token);
        token = strtok(NULL, ",");
        numCols++;
    }

    while (fgets(line, sizeof(line), csvFile) != NULL && numRows < MAX_ROWS) 
	{
        token = strtok(line, ",");
        numCols = 0;
        while (token != NULL && numCols < MAX_COLS) 
		{
            strcpy(cellTable[numRows][numCols], token);
            token = strtok(NULL, ",");
            numCols++;
        }
        numRows++;
    }

    fclose(csvFile);

    printf("Total number of rows: %d\n", numRows);
    printf("Total number of columns: %d\n", numCols);

    printf("\n");
    displayTable(cellTable, 1, numCols);

    displayTable(cellTable, numRows, numCols);

    return 0;
}

void displayTable(char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE], int numRows, int numCols) 
{
    int i, j;
    
    for (i = 0; i < numCols; i++) 
	{
        printf("%s\t|", table[0][i]);
    }
    printf("\n");

    for (i = 1; i < numRows; i++) 
	{
        for (j = 0; j < numCols; j++) 
		{
            printf("%s\t|", table[i][j]);
        }
        printf("\n");
    }
}
