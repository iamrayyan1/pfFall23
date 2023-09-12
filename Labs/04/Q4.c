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

 float i = 0, ans1 = 0, ans2 = 0;
 int a = 0, b = 0, c = 0;

  printf("ax^2 + bx + c \n");
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  printf("Enter c: ");
  scanf("%d", &c);
  
  if (pow(b,2)- 4 * a * c >= 0)
  {
   i = sqrt(pow(b,2)- 4 * a * c);
   ans1 = (-b - i)/(2*a);
   ans2 = (-b + i)/(2*a);
   printf("Ans 1: %f \n, Ans2: %f \n", ans1, ans2);
  }
  else
   printf("No real numbers \n");

return 0;  
}
//end main.
  
