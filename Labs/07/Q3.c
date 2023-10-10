* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Division without using division operator
* Related Files: Take a number from user and count the sum of their digits.
*/

#include <stdio.h>
int main(void) 
{
	int n,sum,rem;
	
	printf("Enter Number: ");
    scanf("%d", &n);
    
    while(n>0)
	{
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    printf("Output: %d",sum);
}
