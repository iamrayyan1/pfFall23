/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Symmetric Matrix
* Related Files:
*/

#include<stdio.h>

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
}


