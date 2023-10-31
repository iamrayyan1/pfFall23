/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Finding Factorial using recursion
* Related Files:
*/

#include<stdio.h>
 
 int fact(int x)
  {
    if(x==0)
    {return 1;
  }
  return x*fact(x-1);
}
int main()
{
	int a;
    printf("Find factorial of: ");
    scanf("%d",&a);
    long x=fact(a);
    printf("\nThe factorial is: %d",x);
}

