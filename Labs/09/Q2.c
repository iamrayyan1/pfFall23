/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Swap Integers
* Related Files:
*/

#include <stdio.h>

void reverse(int *arr, int size) 
{
    for (int i = 0; i < size / 2; i++) 
	{
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() 
{
    int n = 10, arr[100];
    printf("Enter 10 elements:\n");

    for (int i = 0; i < n; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}
