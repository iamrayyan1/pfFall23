#include <stdio.h>

int main() 
{
    int a, b, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);
    
    int arr[a][b];
    
    printf("\nInput elements in binary matrix(0s and 1s only):\n");
    for (i = 0; i < a; i++) 
	{
        for (j = 0; j < b; j++) 
		{
			printf("\nEnter element in row#%d-column#%d:\n",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for (i = 0; i < a; i++) 
	{
        for (j = 0; j < b; j++) 
		{
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
}//incomplete
