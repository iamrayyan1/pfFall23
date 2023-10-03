/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/


#include <stdio.h>
int main() 
{

  int a,b;
  
  printf("Enter Num 1: ");
  scanf("%d",&a);
  printf("Enter Num 2: ");
  scanf("%d",&b);
  
  while(a<=b)
 {
 
  while(a<=9)
  {
  switch(a)
  {
  case 1:
  printf("one\n");
  break;
  case 2:
  printf("two\n");
  break;
        case 3:
  printf("three\n");
  break;
        case 4:
  printf("four\n");
  break;
        case 5:
  printf("five\n");
  break;
        case 6:
  printf("six\n");
  break;
        case 7:
  printf("seven\n");
  break;
        case 8:
  printf("eight\n");
  break;
         case 9:
  printf("nine\n");
  break;
 }
a++;
}
 if(a%2==0)
 {
  printf("even\n");
 }
 else
 printf("odd\n");
  a++;
 } 
 }
