/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Division without using division operator
* Related Files:
*/

#include <stdio.h>
int main(void) 
{
    int a, b, ans = 0;

    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);

    if (b != 0) 
	{
        while (a >= b) 
		{
            a = a-b;
            ans++;
        }
        printf("Quotient: %d\n", ans);
        printf("Remainder: %d\n", a);
  }
    return 0;
}
