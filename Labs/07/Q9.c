/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: 2D Arrays of Phone bills
* Related Files:
*/

#include <stdio.h>

int main(void) 
{
    int a,b,i,j;

    printf("Enter the number of company branches(rows): ");
    scanf("%d", &a);
    printf("Enter the number of mobile phones(columns): ");
    scanf("%d", &b);
    
    int arr[a][b];

    for(i=0;i<a;i++) 
	{
		for(j=0;j<b;j++)
		{
			printf("Enter bill amount for Branch %d, Mobile Phone %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
		}
    }
    
    
    double totalBill = 0.0;
    for (int i = 0; i < a; i++) 
	{
        for (int j = 0; j < b; j++) 
		{
            totalBill = totalBill + arr[i][j];
        }
    }
    printf("Total bill for all branches: %.2lf\n", totalBill);

    
	for (int i = 0; i < a; i++) 
	{
        double branchTotal = 0.0;
        for (int j = 0; j < b; j++) 
		{
            branchTotal = branchTotal + arr[i][j];
        }
        printf("Total bill for Branch %d: %.2lf\n", i + 1, branchTotal);
    }

    int maxBranchID = 0;
    double maxBranchBill = 0.0;
    for (int i = 0; i < a; i++) 
	{
        double branchTotal = 0.0;
        for (int j = 0; j < b; j++) 
		{
            branchTotal += arr[i][j];
        }
        if (branchTotal > maxBranchBill) 
		{
            maxBranchBill = branchTotal;
            maxBranchID = i + 1;
        }
    }
    printf("Branch ID with maximum bill: %d\n", maxBranchID);


    int maxMobileBranchID = 0;
    int maxMobilePhoneID = 0;
    double maxMobilePhoneBill = 0.0;

    for (int i = 0; i < a; i++) 
	{
        for (int j = 0; j < b; j++) 
		{
            if (arr[i][j] > maxMobilePhoneBill) 
			{
                maxMobilePhoneBill = arr[i][j];
                maxMobileBranchID = i + 1;
                maxMobilePhoneID = j + 1;
            }
        }
    }
    printf("Branch ID and Mobile Phone ID with the highest bill: Branch %d, Mobile Phone %d\n", maxMobileBranchID, maxMobilePhoneID);

    return 0;
}
