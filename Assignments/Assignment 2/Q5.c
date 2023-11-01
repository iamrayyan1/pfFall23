/*
* Programmer: Rayyan Merchant
* Date: 31st Oct 2023
* Description: Ramanujan-Hardy Numbers 2-way
*/

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("The Ramanujan numbers till %d are:\n");

    for (int i = 1; i <= n; i++) 
	{
        for (int j = i + 1; j <= n; j++) 
		{
            for (int k = i; k <= n; k++) 
			{
                for (int l = k + 1; l <= n; l++) 
				{
                    if (i != j && i != k && i != l && j != k && j != l && k != l) 
					{
                        if (i * i * i + j * j * j == k * k * k + l * l * l) 
						{
                            printf("%d: %d^3 + %d^3 = %d^3 + %d^3\n", i * i * i + j * j * j, i, j, k, l);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
