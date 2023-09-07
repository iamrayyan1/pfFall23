#include <stdio.h>
#include <math.h>

int main(void)
 {
	float a,b,answer;
	char sign;
	printf("Enter First Number: ");
        scanf("%f", &a);
        printf("Enter Second Number: ");
        scanf("%f", &b);
	printf("Enter Operator: ");
        scanf(" %c", &sign);
  
    if (sign == '+')
    {
    	answer = (a+b);
    	printf("Answer is: %.2f", answer);
    }
	else if (sign == '-')
	   {
    	answer = (a-b);
    	printf("Answer is: %.2f", answer);
     }
   	else if (sign == '*')
	   {
    	answer = (a*b);
    	printf("Answer is: %.2f", answer);
     }
	else if (sign == '/')
	   {
    	answer = (a/b);
    	printf("Answer is: %.2f", answer);
	   }
  return 0;
}

