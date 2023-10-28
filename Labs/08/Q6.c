


#include <stdio.h>

void arr(int *arr, int n) 
{
    int min = ~(1 << 31), max = 1 << 31, sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        sum += arr[i];
    } 

    printf("\nSum: %d\nMax: %d\nMin: %d", sum, max, min);
} 

int main() 
{
    int n, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
{
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
}

    arr(arr, n);

    return 0;
}
