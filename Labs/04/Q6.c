/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/
#include <stdio.h>

int main() {
    int i = 1, j = 1 ;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    while (i <= n) 
    {
        while (j <= n - i) {
            printf(" ");
            j++;
    }
        printf("*");
      
        while (j < 2 * i - 1)
          {
            if (j == 1 || j == 2 * i - 2) 
            {
                printf(" ");
            } else 
            {
                printf("*");
            }
            j++;
        }
        if (i != 1)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }

i = n - 1;
    while (i >= 1)
      {
        int j = 1;
        while (j <= n - i)
          {
            printf(" ");
            j++;
          }
        printf("*");
        j = 1;
        while (j < 2 * i - 1) 
        {
            if (j == 1 || j == 2 * i - 2) 
            {
                printf(" ");
            } else 
            {
                printf("*");
            }
            j++;
        }
        if (i != 1) 
        {
            printf("*");
        }
        printf("\n");

        i--;
    }

    return 0;
}

