/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/

#include <stdio.h>

int main() 
{
  int i=1, n1, n2, k = 1, j = 1, s;
  printf("Enter Num1: ");
  scanf("%d", &n1);
  printf("Enter Num2: ");
  scanf("%d", &n2);
  int p=n1;
  int q=n2;
  if(n1<n2)
  {
  s=n1;
  }
  else
  {
  s=n2;
  }
  while(i<=s)
  {
  if(n1%i==0 && n2%i==0)
  {
     k = k*i;
     n1/=i;                                              
   n2/=i;
   i=1;
  }
  i++;
  }
  i=1;
  printf("HCF is %d\n", k);
  j = (p*q)/k;
   printf("LCM is %d", j);
}
