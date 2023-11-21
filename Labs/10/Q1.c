/*
Name: Rayyan Merchant
ID:23k-0073
Description: Printing Function using DMA and Pointers
Date:14/11/23
*/

#include <stdio.h>

void Array(void *arr, size_t size, char type) 
{
    size_t i;

    switch (type) 
    {
        case 'd':
            for (i = 0; i < sizeof(int); i++) 
            {
                printf("%d ", *((int*)arr + i));
            }
            break;

        case 'f': 
            for (i = 0; i < sizeof(float); i++) 
            {
                printf("%f ", *((float*)arr + i));
            }
            break;

        case 'c':  
            for (i = 0; i < sizeof(char); i++) 
            {
                printf("%c ", *((char*)arr + i));
            }
            break;

            return;
    }

    printf("\n");
}

int main() 
{
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    printf("Int Array: ");
    Array(intArray, sizeof(intArray), 'd');

    printf("Float Array: ");
    Array(floatArray, sizeof(floatArray), 'f');

    printf("Char Array: ");
    Array(charArray, sizeof(charArray), 'c');

    return 0;
}
