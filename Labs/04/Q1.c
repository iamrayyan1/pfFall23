/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/

#include <stdio.h>

int main(void)
{
  int i = 0, j = 0, n;
  
  printf("Enter no. of blocks: \n");
  scanf("%d" , &n);
  
  while (i <= n)
  {
   i = i + 1;
   j = i;
    while (j > 0) 
   {
     j = j - 1;
     printf("*");
   }
   printf("\n");

  }
return 0;
}
