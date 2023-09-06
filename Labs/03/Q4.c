/*#include <stdio.h>

 int main()
 {
 int h = 1500;
 int l; 
 
 l = 1500 * 0.8;
 
 printf("Sale Price is : %d" ,l);
}*/

#include <stdio.h>

 int main()
 {
  int p,op;
  float sp;
  printf("Enter Original Price: ");
  scanf("%d" ,&op);
  printf("Enter Discount%: ");
  scanf("%d" ,&p);
 
  sp = (1-((float) p/100)) * op;
 
 printf("Sale Price is : %.2f" ,sp);
}
