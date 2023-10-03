



#include <stdio.h>

int main(void)
{
	int n = 1, sum = 0, i = 0, j = 0;
	
	printf("Enter a Number: \n");
	scanf("%d", &i);
	
	while(n < i) {
	j = i%n;
	
	if(j == 0)
	{
		sum = sum + n;
	}
	n++;
  }
  if( sum == i)
  {
  	printf("Perfect Number \n");
  }
  else
  {
  	printf("Not a perfect number \n");
  }
   return 0;
}
