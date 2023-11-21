/*
Name: Rayyan Merchant
ID:23k-0073
Description: Printing prime numbers using DMA
Date:14/11/23
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool prime(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}


void fill(int** array, int rows, int cols) 
{
    int currentPrime = 2;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            while (!prime(currentPrime)) 
            {
                currentPrime++;
            }
          
            array[i][j] = currentPrime;
            currentPrime++;
        }
    }
}

void printArray(int** array, int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);
  
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int*)malloc(cols * sizeof(int));
    }

    fill(array, rows, cols);

    printf("\n2D Array of Consecutive Prime Numbers:\n");
    printArray(array, rows, cols);


    for (int i = 0; i < rows; i++) 
    {
        free(array[i]);
    }
    free(array);

    return 0;
}
