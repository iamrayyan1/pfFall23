/*
Name: Rayyan Merchant
ID:23k-0073
Description: Printing Function using DMA and Pointers
Date:14/11/23
*/

#include <stdio.h>


void swap(void *a, void *b, size_t size) 
{
     char *byte_a = (char*)a;
     char *byte_b = (char*)b;

    while (size--) 
    {
        *byte_a ^= *byte_b;
        *byte_b ^= *byte_a;
        *byte_a ^= *byte_b;

        byte_a++;
        byte_b++;
    }
}

int main() 
{
    int x, y;
    
    printf("Enter Num 1: ");
    scanf("%d",&x);
    printf("Enter Num 2: ");
    scanf("%d",&y);
    
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y, sizeof(int));

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
