#include <stdio.h>
#include <math.h>


void calculator(void);
int main(void)
{
	calculator();
}

void calculator()
{
	float a,b,answer;
    char s;
    printf("Enter First Number: ");
    scanf("%f", &a);
    printf("Enter Second Number: ");
    scanf("%f", &b);
    printf("Enter Operator: ");
    scanf(" %c", &s);
  
    switch(s)
    {
  	 case '+':
  		answer = a + b;
  		//printf("answer is: %.2f\n", answer);
  		break;
  	 case '-':
	    answer = a - b;
	    //printf("answer is: %.2f\n", answer);
	    break;
	 case '*':  
	    answer = a * b;
	    //printf("answer is: %.2f\n", answer);
	    break;
	 case '/':
		if ( b == 0) {
	    	printf("Error\n");
	    }
		else 
		{			
		answer = a * b;
		//printf("answer is: %.2f\n", answer);
	    }
		break;		
	    default:
	    printf("Invalid input, try again\n");	    
    }	    	
   printf("%.2f %c %.2f = %.2f",a, s, b, answer);
}
 	
