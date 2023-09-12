/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  int i = 1, j = 0, sum = 0, n, num;
  
  printf("Enter no. of inputs: ");
  scanf("%d" , &n);
  
  while( i <= n)
   {
    printf("Enter Number: ");
    scanf("%d", &num);
    i = i + 1;
    j = num * num;
    sum = sum + j;
   }
  printf("The sum is: %d\n", sum);
return 0;
}
