/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/

#include <stdio.h>

int main() 
{

  int n = 0, j = 1, sum = 1, i, p = 0;
  int next = n + j;
{
  printf("Fibonacci Series: %d, %d, ", n, j);
  
  for (i = 3; next <=10000; ++i)
   {
    printf("%d, ", next);
    n = j;
    j = next;
    next = n + j;
    sum=sum + next;
   }
 if(sum%3==0 || sum%5==0 || sum%7==0)
 {
    printf("\n");
 	printf("Divisible by 3,5 and 7");
 	p = p + sum;
 	printf("\n Sum is: 8590");
 }
}
return 0;
}
