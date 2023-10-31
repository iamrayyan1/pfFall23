/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Shirts Management Table using Arrays and Sorting
*/

#include <stdio.h>

int main()
{
	int shirt[2][100] , i , j , n;
	
	printf("Enter the number of shirts: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Age of Shirt: ");
		scanf("%d",&shirt[0][i]);
		
		printf("Enter Price of Shirt: ");
		scanf("%d",&shirt[1][i]);	
	}
	printf("\nShirt details:\n");
    printf("| Shirt    |  Age |  Price   |\n");

	for(i=0;i<n;i++)
	{
		printf("  Shirt:%d  |  %d  |  $%d  \n",i+1,shirt[0][i],shirt[1][i]);
	}
		
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		
		if(shirt[0][j] > shirt[0][j+1])
		{
			int tempAge = shirt[0][j];
			shirt[0][j] = shirt[0][j+1];
			shirt[0][j+1] = tempAge;
			
			int tempShirt = shirt[1][j];
			shirt[1][j] = shirt[1][j+1];
			shirt[1][j+1] = tempShirt;
			
		}  
	}
	printf("\nSorting in Ascending order with respect to Age\n");
	printf("| Shirt    |  Age |  Price   |\n");

	for(i=0;i<n;i++)
	{
		printf("  Shirt:%d  |  %d  |  $%d  \n",i+1,shirt[0][i],shirt[1][i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		
		if(shirt[1][j] < shirt[1][j+1])
		{
			int tempAge = shirt[1][j];
			shirt[1][j] = shirt[1][j+1];
			shirt[1][j+1] = tempAge;
			
			int tempShirt = shirt[0][j];
			shirt[0][j] = shirt[0][j+1];
			shirt[0][j+1] = tempShirt;
			
		}  
	}
	printf("\nSorting in Descending order with respect to Price\n");
	printf("| Shirt    |  Age |  Price   |\n");

	for(i=0;i<n;i++)
	{
		printf("  Shirt:%d  |  %d  |  $%d  \n",i+1,shirt[0][i],shirt[1][i]);
	}
}
