

/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Symmetric Matrix
* Related Files:
*/

/*#include<stdio.h>
main() 
{ 
int arr1[2][2],arr2[2][2],ans[2][2];
printf("enter elements of the first matrix:\n ");
for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
		{
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("enter elements of the second matrix:\n ");

for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
		{
            scanf("%d", &arr2[i][j]);
        }
    }
 
     for (int i = 0; i < 2; i++) 
	 {
        for (int j = 0; j < 2; j++) 
		{
            ans[i][j] = 0;
            for (int k = 0; k < 2; k++) 
			{
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}*/


//MATRIX MULTIPLICATION

#include <stdio.h>

int main() 
{
    int a, b, c, d, i, j, k, sum;

    printf("Enter the number of rows of First Matrix: ");
    scanf("%d", &a);
    printf("Enter the number of columns First Matrix: ");
    scanf("%d", &b);
    
    printf("Enter the number of rows of Second Matrix: ");
    scanf("%d", &c);
    printf("Enter the number of columns Second Matrix: ");
    scanf("%d", &d);
    
    if( b == c )
    {
	
    
      int arr1[a][b],arr2[c][d],product[a][d];
    
      printf("\nInput 1st Matrix:\n");
      for (i = 0; i < a; i++) 
	  {
        for (j = 0; j < b; j++) 
		{
            scanf("%d", &arr1[i][j]);
        }
      }
    
      printf("\nFirst Matrix is:\n");
      for (i = 0; i < a; i++) 
	  {
        for (j = 0; j < b; j++) 
		{
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
      }
    
      printf("\nInput 2nd Matrix:\n");
      for (i = 0; i < c; i++) 
	  {
        for (j = 0; j < d; j++) 
		{
            scanf("%d", &arr2[i][j]);
        }
      }
    
      printf("\n2nd Matrix is:\n");
      for (i = 0; i < c; i++) 
	  {
        for (j = 0; j < d; j++) 
		{
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
      }
      
      for (i = 0; i < a; i++) 
	  {
		
        for (j = 0; j < d; j++) 
		{
			sum = 0;
			for(k = 0;k<b && k<c; k++)
			{
				sum = sum + (arr1[i][k] * arr2[k][j]);
			}
			product[i][j] = sum;
		}
      }
    
      printf("\nMatrix Multiplication is:\n");
      for (i = 0; i < a; i++) 
	  {
        for (j = 0; j < d; j++) 
		{
            printf("%d\t", product[i][j]);
        }
        printf("\n");
      }
    }
     else
    {
    	printf("\nError, Please choose correct rows and column for Matrix Multiplication");
	}
}


